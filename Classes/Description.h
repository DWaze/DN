//
// Created by dredhat on 23/11/18.
//


#include "../libs/XMLSerialization.h"
#include "Parametre.h"

class Descirption: public xmls::Serializable
{
public:
    Descirption();
    xmls::Collection<Parametre> lParametre;
};


#endif //TESTING_DESCRIPTION_H
