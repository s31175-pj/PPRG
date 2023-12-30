
#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");

	//Zadanie 1

	/*int wektor_size;
	cout << "Podaj d³ugoœæ wektora: ";
	cin >> wektor_size;
	vector<int> wektor;
	wektor.reserve(wektor_size);
	int wartosc = 0;
	int max_wartosc = INT32_MIN;
	int max_pozycja = 0;

	for (int i = 0; i < wektor_size; i++) {
		cout << "Podaj wartoœæ: ";
		cin >> wartosc;
		wektor.push_back(wartosc);
		if (max_wartosc < wartosc) {
			max_wartosc = wartosc;
			max_pozycja = i;
		}
	}
	cout << "Najwiêksza wartoœæ wektora to " << max_wartosc << ", a jej indeks w wektorze to " << max_pozycja;*/

	//Zadanie 2

	int tablica_size_x, tablica_size_y;

	cout << "Podaj rozmiar x tablicy: ";
	cin >> tablica_size_x;
	int center_x = tablica_size_x / 2;
	cout << "Podaj rozmiar y tablicy: ";
	cin >> tablica_size_y;
	int** tablica = new int*[tablica_size_y];
	int** tablica1 = new int* [tablica_size_y];

	cout << "center x: " << center_x;

	for (int i=0; i < tablica_size_y; i++)
		tablica[i] = new int[tablica_size_x];

	cout << endl;

	for (int i=0; i<tablica_size_y; i++)
		for (int j=0; j < tablica_size_x; j++)
		{
			cout << "Podaj element [" << i << "][" << j << "] tablicy: ";
			cin >> tablica[i][j];
		}

	cout << "\nTwoja tablica: \n\n";

	for (int i=0; i < tablica_size_y; i++) {
		for (int j=0; j < tablica_size_x; j++)
		{
			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}

	for (int i = 0; i < tablica_size_y; i++)
		tablica1[i] = new int[tablica_size_x];

		
	for (int i = 0; i < tablica_size_y; i++) {
		if (tablica_size_x % 2 != 0) {
			for (int j = 0; j <= center_x; j++) {
				if (j == center_x)
					tablica1[i][j] = tablica[i][j];
				else {
					tablica1[i][j] = tablica[i][center_x + j + 1];
					tablica1[i][center_x + j + 1] = tablica[i][j];
				}
			}
		}
		else {
			for (int j = 0; j < center_x; j++) {
				tablica1[i][j] = tablica[i][center_x + j];
				tablica1[i][center_x + j] = tablica[i][j];
			}
		}
	}
	
	cout << "\nZamieniona tablica: \n\n";

	for (int i = 0; i < tablica_size_y; i++) {
		for (int j = 0; j < tablica_size_x; j++)
		{
			cout << tablica1[i][j] << " ";
		}
		cout << endl;
	}
}