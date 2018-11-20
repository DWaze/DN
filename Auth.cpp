class Auth: public xmls::Serializable
{
public:
    Auth();

    Rep rep;
    xmls::xString AccAuth;
    xmls::xString RefAuth;

};


class Rep: public xmls::Serializable
{
public:
    Rep();

    xmls::xString AccAuth;
    xmls::xString RefAuth;

};

Auth::Auth() {
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Auth");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("Header", &header);
    Register("Body", &body);

}


Rep::Rep() {
    // Set the XML class name.
    // This name can differ from the C++ class name
    setClassName("Rep");

    // Register members. Like the class name, member names can differ from their xml depandants
    Register("AccAuth", &AccAuth);
    Register("RefAuth", &RefAuth);

}
