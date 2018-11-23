//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_ACCEP_H
#define TESTING_ACCEP_H


#include "../libs/XMLSerialization.h"
#include "MessageValide.h"
#include "ContreProp.h"

class Accep: public xmls::Serializable
{
public:
    Accep();
    MessageValide messageValide;
    ContreProp contreProp;
};



#endif //TESTING_ACCEP_H
