//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_MESSAGE_H
#define TESTING_MESSAGE_H


#include "../libs/XMLSerialization.h"
#include "Prop.h"
#include "Auth.h"
#include "Accep.h"
#include "Dmd.h"

class Message: public xmls::Serializable
{
public:
    Message();
    xmls::xString Dte;
    xmls::xString DureeValideMsg;
    Prop proposition;
    Auth authorisation;
    Dmd demand;
    Accep acceptation;
};

#endif //TESTING_MESSAGE_H
