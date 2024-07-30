#ifndef CROSS_STREET_H
#define CROSS_STREET_H

#include <string>
#include "street.h"

class Cross_Street:public Street
{
    std::string Leg;
public:
    Cross_Street();
    Cross_Street(int key, std::string name, std::string type, std::string leg);
    std::string getLeg()const;
    void setLeg(const std::string);
};

#endif // CROSS_STREET_H
