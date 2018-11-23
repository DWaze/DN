//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_DMD_H
#define TESTING_DMD_H


#include "../libs/XMLSerialization.h"

class Dmd: public xmls::Serializable
{
public:
    Dmd();

    xmls::xString descDmd;
    xmls::xString dateDebut;
    xmls::xString dateFin;
};


#endif //TESTING_DMD_H
