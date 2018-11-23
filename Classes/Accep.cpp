//
// Created by dredhat on 23/11/18.
//

#include "Accep.h"

Accep::Accep()
{
    setClassName("Accep");
    Register("MessageValide", &messageValide);
    Register("ContreProp", &contreProp);

};