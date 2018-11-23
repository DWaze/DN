//
// Created by dredhat on 23/11/18.
//


#include "../libs/XMLSerialization.h"

class Parametre: public xmls::Serializable
{
public:
    Parametre();
    xmls::xString nom;
    xmls::xString valuer;
};


#endif //TESTING_PARAMETRE_H
