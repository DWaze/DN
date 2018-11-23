//
// Created by dredhat on 23/11/18.
//


#include "../libs/XMLSerialization.h"
#include "Description.h"

class Objet: public xmls::Serializable
{
public:
    Objet();
    xmls::xString type;
    Descirption descrption;
};



#endif //TESTING_OBJECT_H
