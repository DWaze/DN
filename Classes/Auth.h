//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_AUTH_H
#define TESTING_AUTH_H


#include "../libs/XMLSerialization.h"
#include "Rep.h"

class Auth: public xmls::Serializable
{
public:
    Auth();

    Rep rep;
};


#endif //TESTING_AUTH_H
