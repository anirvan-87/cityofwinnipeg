#ifndef COMMONDATASTRUCTS_H
#define COMMONDATASTRUCTS_H

/*
 * The purpose of this header file is to contain all the structures which
 * will be having different data.
 */

#include <string>

//This structure is for containing the data of Stops.
struct _StopsData_{
    int key;
    std::string name;
    int number;
    std::string direction;
    std::string side;
    int street_key;
    std::string street_name;
    std::string street_type;
    int cross_street_key;
    std::string cross_street_name;
    std::string cross_street_type;
    std::string cross_street_leg;
    std::string utm_zone;
    int utm_x;
    int utm_y;
    std::string latitude;
    std::string longitude;
}StopsData;

#endif // COMMONDATASTRUCTS_H
