#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include "UzytkownikMeneger.h"
#include "AdresatMeneger.h"

using namespace std;

class KsiazkaAdresowa
{
UzytkownikMeneger uzytkownikMeneger;
AdresatMeneger *adresatMeneger;
MetodyPomocnicze metodyPomocnicze;
const string NAZWA_PLIKU_Z_ADRESATAMI;
char wybor;

public:
    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMeneger (nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
        {
         adresatMeneger = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMeneger;
        adresatMeneger = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void menuGlowne();
    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();

};
#endif
