#include <iostream>
#include "libs/tinyxml2.h"
#include "libs/XMLSerialization.h"
#include "Header.cpp"
#include "Fichier.cpp"

int main()
{
    Fichier *settings=new Fichier; // Create new object
    settings->Setting1="Settings string 1"; // set new values
    settings->Setting2="Settings string 2";
    settings->Setting3="Settings string 3";
    settings->Setting4=1234;
    settings->Setting5=5678;
    settings->Setting6=false;
    settings->Setting7=true;

    std::string strValue = settings->Setting1.value();
    int intValue = settings->Setting4.value();

    cout << "Login, URL:" << endl;
    cout << "Hostname: " << settings->Login.HostName.value();
    cout << ":" << settings->Login.Port.value() << endl;
// Member collection
    cout << "Show all collection items" << endl;
    for (size_t i=0; i<settings->LastUsedDocuments.size(); i++)
    {
        Header* doc = settings->LastUsedDocuments.getItem(i);
        cout << "Item " << i << ": " << doc->Name.value() << endl;
    }

    std::string xmlData = settings->toXML();
    cout << xmlData;

}