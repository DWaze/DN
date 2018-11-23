//
// Created by dredhat on 23/11/18.
//

#include "Body.h"

Body::Body()
{
    setClassName("Body");
    Register("CollMess", &CollMess);
};