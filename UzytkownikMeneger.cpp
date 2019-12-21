#include "UzytkownikMeneger.h"

using namespace std;

void UzytkownikMeneger::rejestracjaUzytkownika()
{
     Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);

    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikMeneger::podajDaneNowegoUzytkownika() // nie podajemy wektorów do funkcji bo ju¿ nasza klasa ma do niego dostêp
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login; //tworzymy nowa zmienna bo musimy cos wpisac z reki i przypisac to do zmiennej metody
    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);
    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}
int UzytkownikMeneger::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}
bool UzytkownikMeneger::czyIstniejeLogin(string login)
{
    for (int i=0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
        cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
        return true;
        }
    }
    return false;
}
void UzytkownikMeneger::wypiszWszystkichUzytkownikow()
{
    for (int i=0; i < uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}
void UzytkownikMeneger::wczytajUzytkownikowZPliku()
{
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

