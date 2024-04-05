#include <iostream>
using namespace std;

int main()
{

	char tablicaTesktowa1[100];
	char tablicaTesktowa2[100];

	cout << "Wprowadz pierwszy tekst: ";
	cin.getline(tablicaTesktowa1, 100);
	cout << "Wprowadz drugi tekst: ";
	cin.getline(tablicaTesktowa2, 100);


	if (strlen(tablicaTesktowa1)>100|| strlen(tablicaTesktowa2) > 100)
	{
		cout << "Blad za duzo znakow w tablicach";
		return 1;
	}
	else
	{
		for (int i = 0; i < strlen(tablicaTesktowa1); i++)
		{
			cout << tablicaTesktowa1[i];
		}

		for (char i = 'a'; i <= 'z'; i++)
			cout << i << ' ';
		cout << endl;

		for (char i = 'A'; i <= 'Z'; i++)
			cout << i << ' ';
	}
	return 0;

}

