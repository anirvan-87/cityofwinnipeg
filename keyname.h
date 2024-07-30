#ifndef KEYNAME_H
#define KEYNAME_H
#include <string>

class KeyName
{
    std::string key;
    std::string name;
public:
    KeyName();
    KeyName(std::string,std::string);
    std::string getKey()const;
    std::string getName()const;
    void setKey(const std::string);
    void setName(const std::string);
};

#endif // KEYNAME_H
