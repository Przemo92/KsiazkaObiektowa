#include "KsiazkaAdresowa.h"

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMeneger.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMeneger.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMeneger.wypiszWszystkichUzytkownikow();
}
