#ifndef STOPS_H
#define STOPS_H

#include "street.h"
#include "cross_street.h"
#include "centre.h"
#include "geographic.h"
#include "parsestopsjson.h"
#include "CommonDataStructs.h"

class Stops
{
    int key;
    std::string name;
    int number;
    std::string direction;
    std::string side;
    Street street;
    Cross_Street cross_street;
    Centre centre;
    Geographic geographic;
    ParseStopsJson parsestops;
public:
    Stops();
    Stops(int,std::string,std::string,std::string,Street,Cross_Street,Centre,Geographic);
    int getKey()const;
    std::string getName()const;
    int getNumber()const;
    std::string getDirection()const;
    std::string getSide()const;
    Street getStreet()const;
    Cross_Street getCross_Street()const;
    Centre getCentre()const;
    Geographic getGeographic()const;
    void setKey(const int);
    void setName(const std::string);
    void setDirection(const std::string);
    void setSide(const std::string);
    void setStreet(const Street&);
    void setCross_Street(const Cross_Street&);
    void setCentre(const Centre&);
    void setGeographic(const Geographic&);
    void GetAllStops();
};

#endif // STOPS_H
