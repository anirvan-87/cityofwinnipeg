#ifndef STREET_H
#define STREET_H
#include <iostream>
#include <string>
class Street
{
    int Key;
    std::string Name;
    std::string Type;
public:
    Street();
    Street(int, std::string, std::string);
    int getKey()const;
    std::string getName()const;
    std::string getType()const;
    void setKey(const int key);
    void setName(const std::string name);
    void setType(const std::string type);
};

#endif // STREET_H
