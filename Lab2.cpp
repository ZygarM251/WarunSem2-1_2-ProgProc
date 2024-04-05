#include "fun.h"

#define Zad2

#ifdef Zad1

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
}
#endif

#ifdef Zad2

constexpr int kolumny = 10;

void SortIter(int tab[], int rozmiar)
{
	for (int i = 0; i < rozmiar - 1; i++)
		for (int j = 0; j < rozmiar - 1; j++)
			if (tab[j] > tab[j + 1]) swap(tab[j], tab[j + 1]);
}

int* SortRek(int taborg[], int left, int right)
{
	int tab[kolumny];
	int i = left;
	int j = right - 1;
	int x = tab[(left + right) / 2];
	do
	{
		while (tab[i] < x)
			i++;

		while (tab[j] > x)
			j--;

		if (i <= j)
		{
			i++;
			j--;
		}
	} while (i <= j);

	if (left < j) SortRek(tab, left, j);

	if (right > i) SortRek(tab, i, right);

	int* wsk = tab;
	return wsk;
}

void wypisz(int(*tab)[kolumny], const int wiersze)
{
	for (size_t i = 0; i < wiersze; i++)
	{
		for (size_t j = 0; j < kolumny; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}


void Sortuj(int(*tab)[kolumny], const int wiersze)
{
	for (int i = 0; i < wiersze; i++)
	{
		if (wiersze % 2 == 0)
		{
			SortIter(tab[i], kolumny);
		}
	}
}
void Sortuj(int(*tab)[kolumny])
{
	int wiersze = 10;
	for (int i = 0; i < wiersze; i++)
	{
		if (wiersze % 2 == 0)
		{
			SortIter(tab[i], kolumny);
		}
	}

}


int main() 
{
	int tab[8][kolumny] = { {4,3,6,1,2,5,6,7,5,6},
							{3,6,3,8,9,1,4,5,2,1},
							{2,6,6,4,8,2,6,3,5,3},
							{6,3,7,2,8,1,4,5,6,5},
							{8,2,1,4,6,3,7,2,2,8},
							{4,3,6,1,2,5,6,7,6,4},
							{3,6,3,8,9,1,4,5,7,1},
							{2,6,6,4,8,2,6,3,8,5}, };

	cout << "Nieposortowana: " << endl;
	wypisz(tab, 10);
	Sortuj(tab);
	cout << "Posortowana: " << endl;
	wypisz(tab, 10);



	wypisz(tab, 6);
	

}

#endif



