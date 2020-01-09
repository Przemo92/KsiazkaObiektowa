#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
    public:
    string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    char wczytajZnak();
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int wczytajLiczbeCalkowita();
};
#endif
