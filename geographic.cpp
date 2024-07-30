#include "geographic.h"

Geographic::Geographic():Lat(0),Long(0) {}
Geographic::Geographic(double lat, double longi):Lat(lat),Long(longi) {}
double Geographic::getLat(){return Lat;}
double Geographic::getLong(){return Long;}
void Geographic::setLat(const double lat){Lat=lat;}
void Geographic::setLong(const double longi){Long=longi;}
