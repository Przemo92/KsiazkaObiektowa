#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include "UzytkownikMeneger.h"

using namespace std;

class KsiazkaAdresowa
{
UzytkownikMeneger uzytkownikMeneger;

public:
    KsiazkaAdresowa (string NAZWA_PLIKU_Z_UZYTKOWNIKAMI, string NAZWA_PLIKU_Z_ADRESATAMI)
        : uzytkownikMeneger (NAZWA_PLIKU_Z_UZYTKOWNIKAMI, NAZWA_PLIKU_Z_ADRESATAMI) {
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void pokazMenu();
};
#endif
