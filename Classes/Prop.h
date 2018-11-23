//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_PROP_H
#define TESTING_PROP_H


#include "../libs/XMLSerialization.h"

class Prop: public xmls::Serializable
{
public:
    Prop();
    xmls::xString Dte;
    Offre offre;
    Demande demande;
};


#endif //TESTING_PROP_H
