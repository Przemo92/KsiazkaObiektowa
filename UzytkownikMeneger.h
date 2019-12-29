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

  public:
      UzytkownikMeneger(string nazwaPlikuZUzytkownikami) :plikZUzytkownikami(nazwaPlikuZUzytkownikami){} ;
      void rejestracjaUzytkownika();
      void logowanieUzytkownika();
      void wybierzOpcjeZMenuUzytkownika();
      void wypiszWszystkichUzytkownikow();
      void wczytajUzytkownikowZPliku();
      void ustawIdZalogowanego(int noweId);
      int pobierzIdZalogowanego();
      void ustawNowyWybor (char nowyWybor);
      void wykonajOpcjeZMenuUzytkownika (char wybor);
      void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
      int dodajAdresata(vector <Adresat> adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
      Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
      void wyswietlWszystkichAdresatow(vector <Adresat> adresaci);
      void wyswietlDaneAdresata(Adresat adresat);
      void zmianaHaslaZalogowanegoUzytkownika(vector <Uzytkownik> uzytkownicy, int idZalogowanegoUzytkownika);
      Uzytkownik podajDaneNowegoUzytkownika();
      int pobierzIdNowegoUzytkownika();
      bool czyIstniejeLogin(string login);
};
#endif
