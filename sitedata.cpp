#include "sitedata.h"

SiteData::SiteData():url{"https://api.winnipegtransit.com/"},apikey{0} {}
void SiteData::seturl(std::string URL){
    url += URL;
}
std::string SiteData::getapikey()const{
    return apikey;
}

// Function to write the response data to a string
size_t SiteData::WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void SiteData::setapikey(){
    apikey="CdUGBDczMhDYfJyU1OUc";
}

std::string SiteData::geturl()const{
    return url;
}

void SiteData::query(){
    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    CURL* curl = curl_easy_init();

    // String to hold the response data
    std::string readBuffer;

    if(curl) {
        // URL of the API endpoint
        const char* url = geturl();

        // API key
        const char* apiKey = getapikey();
        // Set up the header with the API key
        struct curl_slist* headers = NULL;
        std::string apiKeyHeader = "Authorization: Bearer " + std::string(apiKey);
        headers = curl_slist_append(headers, apiKeyHeader.c_str());

        // Set the URL for the request
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // Set the callback function to write the response data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Perform the request
        CURLcode res = curl_easy_perform(curl);

        // Check for errors
        if(res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        else {
            // Print the response data
            //std::cout << "Response data: " << readBuffer << std::endl;
            //Open the Json file
            std::ofstream file("data.json");
            if(!file.is_open()){
                std::cerr<<"Could not open the file!"<<std::endl;
                return 1;
            }
            file << readBuffer;
            file.close();
        }

        // Clean up
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}
