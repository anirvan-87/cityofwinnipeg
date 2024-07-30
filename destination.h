#ifndef DESTINATION_H
#define DESTINATION_H

#include "keyname.h"
class Destination: public KeyName
{
    KeyName* keynameset;
public:
    Destination();
    Destination(KeyName);
};

#endif // DESTINATION_H
