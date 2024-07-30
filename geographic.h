#ifndef GEOGRAPHIC_H
#define GEOGRAPHIC_H

class Geographic
{
    double Lat;
    double Long;
public:
    Geographic();
    Geographic(double, double);
    double getLat();
    double getLong();
    void setLat(const double);
    void setLong(const double);
};

#endif // GEOGRAPHIC_H
