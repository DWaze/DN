//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_OFFRE_H
#define TESTING_OFFRE_H


#include "../libs/XMLSerialization.h"
#include "Objet.h"

class Offre: public xmls::Serializable
{
public:
    Offre();
    xmls::Collection<Objet> lParametre;
};


#endif //TESTING_OFFRE_H
