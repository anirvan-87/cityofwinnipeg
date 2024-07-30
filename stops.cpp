#include "stops.h"

Stops::Stops() {}
Stops::Stops(int key,std::string name,std::string direction,std::string side,Street street,Cross_Street cross_street,Centre centre,Geographic geographic):
    key(key),name(name),number(key),direction(direction),side(side),street(street),cross_street(cross_street),centre(centre),geographic(geographic){}
int Stops::getKey()const{return key;}
std::string Stops::getName()const{return name;}
int Stops::getNumber()const{return number;}
std::string Stops::getDirection()const{return direction;}
std::string Stops::getSide()const{return side;}
Street Stops::getStreet()const{return street;}
Cross_Street Stops::getCross_Street()const{return cross_street;}
Centre Stops::getCentre()const{return centre;}
Geographic Stops::getGeographic()const{return geographic;}
void Stops::setKey(const int Key){key=Key;number=Key;}
void Stops::setName(const std::string Name){name=Name;}
void Stops::setDirection(const std::string Direction){direction=Direction;}
void Stops::setSide(const std::string Side){side=Side;}
void Stops::setStreet(const Street& strt){street=strt;}
void Stops::setCross_Street(const Cross_Street& crss_strt){cross_street=crss_strt;}
void Stops::setCentre(const Centre& cntr){centre=cntr;}
void Stops::setGeographic(const Geographic& geogrphc){geographic=geogrphc;}

//For setting the parsed data of the stops.
void Stops::GetAllStops(){
    std::list<StopsData*> stopdata = parsestops.GetAllStopsData();
    for(const StopsData& stop: stopdata){
        setKey(stop.key);
        setName(stop.name);
        setDirection(stop.direction);
        setSide(stop.side);
        Cross_Street cross_strt;
        cross_strt.setKey(stop.cross_street_key);
        cross_strt.setName(stop.cross_street_name);
        cross_strt.setType(stop.cross_street_type);
        cross_strt.setLeg(stop.cross_street_leg);
        setCross_Street(cross_strt);
        Centre centre;
        centre.setZone(stop.utm_zone);
        centre.setX(stop.utm_x);
        centre.setY(stop.utm_y);
        setCentre(centre);
        Geographic geographic;
        geographic.setLat(stop.latitude);
        geographic.setLong(stop.longitude);
        setGeographic(geographic);
    }
}
