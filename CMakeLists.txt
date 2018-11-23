cmake_minimum_required(VERSION 3.12)
project(Testing)

set(CMAKE_CXX_STANDARD 14)

add_executable(Testing main.cpp Classes/Objet.cpp Classes/Objet.h Classes/Description.cpp Classes/Description.h Classes/Parametre.cpp Classes/Parametre.h Classes/Prop.cpp Classes/Prop.h Classes/Demande.cpp Classes/Demande.h Classes/Offre.cpp Classes/Offre.h Classes/MessageValide.cpp Classes/MessageValide.h Classes/ContreProp.cpp Classes/ContreProp.h Classes/Accep.cpp Classes/Accep.h Classes/Rep.cpp Classes/Rep.h Classes/Auth.cpp Classes/Auth.h Classes/Body.cpp Classes/Body.h Classes/Message.cpp Classes/Message.h Classes/Dmd.cpp Classes/Dmd.h)