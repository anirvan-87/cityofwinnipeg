#include "parsestopsjson.h"

ParseStopsJson::ParseStopsJson() {}

void ParseStopsJson::parsejson(){
    // Open the JSON file
    std::ifstream inputFile("data.json");
    if (!inputFile.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    // Parse the JSON file
    json j;
    inputFile >> j;

    // Accessing the array of stops
    auto stops = j["stops"];

    // Iterate through each stop and extract values
    for (const auto& stop : stops) {
        Data data;
        data.key = stop["key"];
        data.name = stop["name"];
        data.number = stop["number"];
        data.direction = stop["direction"];
        data.side = stop["side"];

        auto street = stop["street"];
        data.street_key = street["key"];
        data.street_name = street["name"];
        data.street_type = street["type"];

        auto cross_street = stop["cross-street"];
        data.cross_street_key = cross_street["key"];
        data.cross_street_name = cross_street["name"];
        data.cross_street_type = cross_street["type"];
        data.cross_street_leg = cross_street.value("leg", "");

        auto centre = stop["centre"];
        auto utm = centre["utm"];
        data.utm_zone = utm["zone"];
        data.utm_x = utm["x"];
        data.utm_y = utm["y"];

        auto geographic = centre["geographic"];
        data.latitude = geographic["latitude"];
        data.longitude = geographic["longitude"];
        StopsData.push_back(&data);
    }
}

std::list<Data*> ParseStopsJson::GetAllStopsData()const{
    return StopsData;
}
