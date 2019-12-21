#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include "UzytkownikMeneger.h"

using namespace std;

class KsiazkaAdresowa
{
UzytkownikMeneger uzytkownikMeneger;

public:
    KsiazkaAdresowa ();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
