#include "fun.h"


int zapiszTablice(int* tab, const int rozmiar, int wartosc, int indeks)
{

	if (tab == nullptr)
	{
		return 0;
	}

	static int  pamiecIndeksu = -1, licznik = 0;
	assert(rozmiar > 0);
	assert(indeks >= 0 && indeks <= 5);

	if (pamiecIndeksu == indeks)
	{
		cout << "Licznik: " << licznik << endl;
		licznik++;
		tab[indeks] = wartosc;
	}
	else
	{
		tab[indeks] = wartosc;
	}
	pamiecIndeksu = indeks;


	for (int i = 0; i < 5; i++)
	{
		tab[i];
		cout << tab[i];
	}

	return licznik;

}

