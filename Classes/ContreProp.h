//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_CONTREPROP_H
#define TESTING_CONTREPROP_H


#include "../libs/XMLSerialization.h"
#include "Prop.h"

class ContreProp: public xmls::Serializable
{
public:
    ContreProp();

    Prop prop;
};


#endif //TESTING_CONTREPROP_H
