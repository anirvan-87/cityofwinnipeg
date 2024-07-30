#include "cross_street.h"

Cross_Street::Cross_Street():Street(),Leg("") {}
Cross_Street::Cross_Street(int key, std::string name, std::string type, std::string leg):Street(key,name,type),Leg(leg){}
std::string Cross_Street::getLeg()const{return Leg;}
void Cross_Street::setLeg(const std::string leg){Leg=leg;}
