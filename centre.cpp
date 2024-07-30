#include "centre.h"

Centre::Centre() {
    X=0;
    Y=0;
    Zone="";
}

Centre::Centre(int x, int y, std::string zone){
    X=x;
    Y=y;
    Zone=zone;
}
int Centre::getX()const{
    return X;
}
int Centre::getY()const{
    return Y;
}
std::string Centre::getZone()const{
    return Zone;
}
void Centre::setX(const int x){
    X=x;
}
void Centre::setY(const int y){
    Y=y;
}
void Centre::setZone(const std::string zone){
    Zone=zone;
}
