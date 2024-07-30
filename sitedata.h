#ifndef SITEDATA_H
#define SITEDATA_H

//#include <curl/curl.h>
#include <string>

class SiteData
{
    std::string url;
    std::string apikey;
public:
    SiteData();
    size_t WriteCallback(void*,size_t,size_t,void*);
    void seturl(std::string);
    std::string geturl()const;
    std::string getapikey()const;
    //void setapikey(); //To be implemented in future
    void query();
};

#endif // SITEDATA_H
