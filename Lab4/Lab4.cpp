
#include <iostream>

using namespace std;

int main()
{
	//Zadanie 1

	/*int dlugosc;
	int max = INT32_MIN;
	cout << "Podaj liczbe elementow tablicy: ";
	cin >> dlugosc;
	int* tablica = new int[dlugosc];

	for (int i = 0; i < dlugosc; i++) {
		cout << "\nPodaj " << i << " element tablicy: ";
		cin >> tablica[i];
		if (tablica[i] > max)
			max = tablica[i];
	}

	cout << "\n Najwiekszy element tablicy to: " << max(tablica[]);*/

	//Zadanie 2

	/*int dlugosc;
	cout << "Podaj liczbe elementow tablicy: ";
	cin >> dlugosc;
	int* tablica = new int[dlugosc];

	int* tablica1 = new int[dlugosc];

	int max = 0;

	for (int i = 0; i < dlugosc; i++) {
		cout << "\nPodaj " << i << " element tablicy: ";
		cin >> tablica[i];
		tablica1[i] = 0;
		for (int j = 0; j <= i; j++) {
			if (tablica[i] == tablica[j]) {
				tablica1[j] ++;
				if (tablica1[j] > max) {
					max = tablica1[j];
				}
				break;
			}
		}
	}

	cout << "\nNajczesciej pojawiajaca sie liczba jest/sa: ";

	for (int i = 0; i < dlugosc; i++) {
		if (tablica1[i] == max)
			cout << tablica[i] << " ";
	}*/

	//Zadanie 3

	int tablica[10][10] = { 0 };

	for (int i = 0; i < 10; i++) {
		tablica[i][0] = i;
		tablica[i][1] = i + i;
		tablica[i][2] = i * i;
		tablica[i][3] = 4 + i + 1;
		tablica[i][4] = i - 5 + 1;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}

}