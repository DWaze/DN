#include "Header.cpp"
#include "Body.cpp"


class Fichier : public xmls::Serializable {
public:
    Fichier();

    Header header;
    Body body;

};

Fichier::Fichier() {
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Fichier");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Header", &header);
    Register("Body", &body);

}