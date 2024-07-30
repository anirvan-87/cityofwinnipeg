#ifndef PARSEJSON_H
#define PARSEJSON_H

//#include <nlohmann/json.hpp>

//using json = nlohmann::json;
class ParseJson
{
public:
    ParseJson();
    virtual void parsejson()=0;
    virtual ~ParseJson();
};

#endif // PARSEJSON_H
