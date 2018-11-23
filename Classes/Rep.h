//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_REP_H
#define TESTING_REP_H


#include "../libs/XMLSerialization.h"

class Rep: public xmls::Serializable
{
public:
    Rep();
    xmls::xString accAuth;
    xmls::xString refAuth;
};


#endif //TESTING_REP_H
