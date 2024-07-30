#include "street.h"

Street::Street():Key(0),Name(""),Type("") {}

Street::Street(int streetkey, std::string streetname, std::string streettype):Key(streetkey),Name(streetname),Type(streettype){}
int Street::getKey()const{
    return Key;
}
std::string Street::getName()const{
    return Name;
}
std::string Street::getType()const{
    return Type;
}
void Street::setKey(const int key){
    Key=key;
}
void Street::setName(const std::string name){
    Name=name;
}
void Street::setType(const std::string type){
    Type=type;
}
