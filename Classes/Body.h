//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_BODY_H
#define TESTING_BODY_H


#include "../libs/XMLSerialization.h"
#include "Message.h"

class Body: public xmls::Serializable
{
public:
    Body();
    xmls::Collection<Message> CollMess;
};


#endif //TESTING_BODY_H
