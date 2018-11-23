// Objet

class Parametre: public xmls::Serializable
{
public:
    Parametre();
    xmls::xString nom;
    xmls::xString valuer;
};

class Descirption: public xmls::Serializable
{
public:
    Descirption();
    xmls::Collection<Parametre> lParametre;
};

class Objet: public xmls::Serializable
{
public:
    Objet();
    xmls::xString type;
    Descirption descrption;
};




// Proposition

class Offre: public xmls::Serializable
{
public:
    Offre();
    xmls::Collection<Objet> lParametre;
};

class Demande: public xmls::Serializable
{
public:
    Demande();
    xmls::Collection<Objet> lParametre;
};

class Prop: public xmls::Serializable
{
public:
    Prop();
    xmls::xString Dte;
    Offre offre;
    Demande demande;
};






class MessageValide: public xmls::Serializable
{
public:
    MessageValide();

    xmls::xString messageValide;
};

class ContreProp: public xmls::Serializable
{
public:
    ContreProp();

    Prop prop;
};


class Accep: public xmls::Serializable
{
public:
    Accep();
    MessageValide messageValide;
    ContreProp contreProp;
};



// Reponse

class Rep: public xmls::Serializable
{
public:
    Rep();
    xmls::xString accAuth;
    xmls::xString refAuth;
};

class Auth: public xmls::Serializable
{
public:
    Auth();

    Rep rep;
};



//List des messages

class Message: public xmls::Serializable
{
public:
    Message();
    xmls::xString Dte;
    xmls::xString DureeValideMsg;
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





// Les Constructeur

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
