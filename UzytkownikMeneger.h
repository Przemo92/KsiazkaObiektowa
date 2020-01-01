#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H
#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"
using namespace std;

class UzytkownikMeneger
{
    MetodyPomocnicze metodyPomocnicze;
    PlikZUzytkownikami plikZUzytkownikami;

    int idZalogowanegoUzytkownika;
    char wybor;

    vector <Uzytkownik> uzytkownicy;
    vector <Adresat> adresaci;

    bool czyIstniejeLogin(string login);
    int pobierzIdNowegoUzytkownika();
    Uzytkownik podajDaneNowegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> uzytkownicy, int idZalogowanegoUzytkownika);
    void wybierzOpcjeZMenuUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata(vector <Adresat> adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlWszystkichAdresatow(vector <Adresat> adresaci);
    void wyswietlDaneAdresata(Adresat adresat);
    void wybierzOpcjeZMenuGlownego();
    bool czyUzytkownikJestZalogowany();

  public:
      UzytkownikMeneger(string NAZWA_PLIKU_Z_UZYTKOWNIKAMI, string NAZWA_PLIKU_Z_ADRESATAMI)
        :plikZUzytkownikami(NAZWA_PLIKU_Z_UZYTKOWNIKAMI, NAZWA_PLIKU_Z_ADRESATAMI){
      uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
      idZalogowanegoUzytkownika = 0;
      };
      void rejestracjaUzytkownika();
      void logowanieUzytkownika();
      void wypiszWszystkichUzytkownikow();//to jest niepotrzebne
      int pobierzIdZalogowanego();
      void pokazMenu();
};
#endif
