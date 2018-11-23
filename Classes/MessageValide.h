//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_MESSAGEVALIDE_H
#define TESTING_MESSAGEVALIDE_H


#include "../libs/XMLSerialization.h"

class MessageValide: public xmls::Serializable
{
public:
    MessageValide();

    xmls::xString messageValide;
};


#endif //TESTING_MESSAGEVALIDE_H
