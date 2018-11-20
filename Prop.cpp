#include "libs/tinyxml2.h"
#include "libs/XMLSerialization.h"


class Parametre: public xmls::Serializable
{
public:
    Parametre();

    xmls::xString Nom;
    xmls::xString Valeur;

};

class Description: public xmls::Serializable
{
public:
    Description();

    xmls::Collection<Parametre> parametre;

};

class Objet: public xmls::Serializable
{
public:
    Objet();

    xmls::xString Type;
    Description description;

};

class Offre: public xmls::Serializable
{
public:
    Offre();

    xmls::Collection<Objet> objet;

};

class Demande: public xmls::Serializable
{
public:
    Demande();

    xmls::Collection<Objet> objet;
};

class Prop: public xmls::Serializable
{
public:
    Prop();

    xmls::xString TitreP;
    xmls::Collection<Offre> offre ;
    xmls::Collection<Demande> demande ;

};



Prop::Prop()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Prop");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("TitreP", &TitreP);
    Register("Offre", &offre);
    Register("Demande", &demande);

}


Offre::Offre()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Offre");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Objet", &objet);

}

Demande::Demande()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Demande");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Objet", &objet);

}


Objet::Objet()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Objet");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Type", &Type);
    Register("Description", &description);

}

Description::Description()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Description");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Parametre", &parametre);
}


Parametre::Parametre()
{
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Parametre");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Nom", &Nom);
    Register("Valeur", &Valeur);

}