class Message: public xmls::Serializable
{
public:
    Message();
    xmls::xString Dte;
    xmls::xString DureeValideMsg;
    xmls::xInt NmIR;
    xmls::xInt NumAuto;
    xmls::xString DtOfSgutAuto;
    xmls::xInt DureeValidAuto;
    xmls::xInt MailDest;
    xmls::xInt MailExp;
    Prop proposition;
    Auth authorisation;
    Dmd demand;
    Accep acceptation;
};


class Body: public xmls::Serializable
{
public:
    Body();
    xmls::Collection<Message> CollMess;
};


Body::Body()
{
    setClassName("Body");
    Register("CollMess", &CollMess);
};

Message::Message(char type)
{
    setClassName("Message");
    Register("Dte", &Dte);
    Register("DureeValideMsg", &DureeValideMsg);
    Register("NmIR", &NmIR);
    Register("NumAuto", &NumAuto);
    Register("DtOfSgutAuto", &DtOfSgutAuto);
    Register("DureeValidAuto", &DureeValidAuto);
    Register("MailDest", &MailDest);
    Register("MailExp", &MailExp);

    if (type =="p" ){
        Register("Prop", &proposition);
    }

    if (type =="a" ){
        Register("Auth", &authorisation);
    }

    if (type =="d" ){
        Register("Dmd", &demand);
    }

    if (type =="c" ){
        Register("Accep", &acceptation);
    }

    Register("CollMess", &CollMess);

};
