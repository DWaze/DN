//
// Created by dredhat on 23/11/18.
//

#include "Message.h"

Message::Message()
{
    setClassName("Message");
    Register("Dte", &Dte);
    Register("DureeValideMsg", &DureeValideMsg);

    Register("Prop", &proposition);
    Register("Auth", &authorisation);
    Register("Dmd", &demand);
    Register("Accep", &acceptation);

};