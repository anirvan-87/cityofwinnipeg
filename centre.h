#ifndef CENTRE_H
#define CENTRE_H

#include <string>

class Centre
{
    int X;
    int Y;
    std::string Zone;
public:
    Centre();
    Centre(int x, int y, std::string);
    int getX()const;
    int getY()const;
    std::string getZone()const;
    void setX(const int);
    void setY(const int);
    void setZone(const std::string);
};

#endif // CENTRE_H
