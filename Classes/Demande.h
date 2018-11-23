//
// Created by dredhat on 23/11/18.
//

#ifndef TESTING_DEMANDE_H
#define TESTING_DEMANDE_H


#include "../libs/XMLSerialization.h"

class Demande: public xmls::Serializable
{
public:
    Demande();
    xmls::Collection<Objet> lParametre;
};


#endif //TESTING_DEMANDE_H
