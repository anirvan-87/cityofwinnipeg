#include "keyname.h"

KeyName::KeyName():key(""),name("") {}
KeyName::KeyName(std::string Key,std::string Name):key(Key),name(Name) {}
std::string KeyName::getKey()const{return key;}
std::string KeyName::getName()const{return name;}
void KeyName::setKey(const std::string Key){key=Key;}
void KeyName::setName(const std::string Name){name=Name;}
