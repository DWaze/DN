class Header: public xmls::Serializable
{
public:
    Header();
    xmls::xString FicID;
    xmls::xString NmIE;
    xmls::xInt NmIR;
    xmls::xInt NumAuto;
    xmls::xInt DtOfSgutAuto;
    xmls::xInt DureeValidAuto;
    xmls::xInt MailDest;
    xmls::xInt MailExp;
};

// Register member's
Header::Header()
{
    setClassName("Header");
    Register("FicID", &FicID);
    Register("NmIE", &NmIE);
    Register("NmIR", &NmIR);
    Register("NumAuto", &NumAuto);
    Register("DtOfSgutAuto", &DtOfSgutAuto);
    Register("DureeValidAuto", &DureeValidAuto);
    Register("MailDest", &MailDest);
    Register("MailExp", &MailExp);
};

