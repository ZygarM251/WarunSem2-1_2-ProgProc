#include "fun.h"

using namespace std;

int main(){

    const int rozmiar = 5;
    int tab[rozmiar] = {};
    int wartosc = 0, indeks = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj wartosc do wpisania do tablicy";
        cin >> wartosc;

        cout << "Podaj adres pod ktorym ma byc zapisana wartosc";
        cin >> indeks;
        if (indeks < 0 || indeks > 4 )
        {
            cout << "Blad poza zakresem";
            return 0;
        }
        else
        {
            cout << "Poprawne" << endl;
            cout << "Wartosc licznik:" << zapiszTablice(tab, rozmiar, wartosc, indeks)<<endl;
        }
    }
    return 0;
}

