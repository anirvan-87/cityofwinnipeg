#ifndef PARSESTOPSJSON_H
#define PARSESTOPSJSON_H

#include <list>
#include <string>
#include "parsejson.h"
#include "CommonDataStructs.h"

class ParseStopsJson: public ParseJson
{
public:
    std::list<StopsData*> stops_data;
    std::list<StopsData*> GetAllStopsData()const;
    ParseStopsJson();
};

#endif // PARSESTOPSJSON_H
