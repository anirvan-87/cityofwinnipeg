#ifndef VARIANT_H
#define VARIANT_H

#include <list>
#include <utility>
#include <vector>
#include <cmath>
#include "keyname.h"
#include "stops.h"
#include "geographic.h"

class Variant: public KeyName
{
    std::list<Stops*> stoplist;
    double totaldistance;
    double maxdistance;
    const int vectorsize=2;
    std::vector<std::string> furtheststopnames;
    std::vector<int> furtheststopnumbers;
public:
    Variant();
    void addStops(Stops*);
    //void removestops(); //Future implementation
    double getTotalDistance();
    void calcDistance();
    void findmidway();
};

#endif // VARIANT_H
