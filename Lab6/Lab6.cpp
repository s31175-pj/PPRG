#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>
using namespace std;

struct uczen {
    string imie;
    int ocena[4];
};

struct student {
    int index;
    string Imie;
    string Nazwisko;
};

int funkcja1(int n, int counter) {
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            cout << i << endl;
            counter++;
        }
    }
    return counter;
}

bool porownaj(const student& a, const student& b)
{
    return a.index < b.index;
}

string konkatenacja(string a, string b) {
    return a + b;
}


int main()
{
    setlocale(LC_CTYPE, "Polish");

    // Zadanie 1

    /*int n = 0;
    int counter = 0;
    cout << "Podaj n: ";
    cin >> n;
    cout << endl;
    counter = funkcja1(n, counter);

    cout << endl << "Liczb nie wi�kszych od " << n << " podzielnych przez 5 i nie podzielnych przez 3 jest " << counter;*/

    //Zadanie 2


    /*struct uczen uczniowie[6];
    int input_uczen;
    int input_ocena;

    for (int i = 0; i < 2; i++) {
        cout << "\nPodaj imi� ucznia nr " << i+1 << ": ";
        cin >> uczniowie[i].imie;
        cout << "Podaj ocen� z informatyki: ";
        cin >> uczniowie[i].ocena[0];
        cout << "Podaj ocen� z matematyki: ";
        cin >> uczniowie[i].ocena[1];
        cout << "Podaj ocen� z chemii: ";
        cin >> uczniowie[i].ocena[2];
        cout << "Podaj ocen� z j�zyka polskiego: ";
        cin >> uczniowie[i].ocena[3];
    }

    cout << "\n\nPodaj numer ucznia (1-6), kt�rego ocen� chcia�by� uzyska�: ";
    cin >> input_uczen;
    cout << "\nPodaj numer przedmiotu (0-3), kt�rego ocen� chcia�by� uzyska�: ";
    cin >> input_ocena;
    cout << "\nUcze�: " << uczniowie[input_uczen - 1].imie << "\nOcena: " << uczniowie[input_uczen - 1].ocena[input_ocena];*/

    // Zadanie 3

    /*vector<student> studenci = {
        {234, "Jan", "Rurek"},
        {10023, "Marcelina", "Paj�k"},
        {15, "Jurek", "Marek"},
        {200, "Olga", "Sierpie�"}
    };

    for (auto& a : studenci) {
        cout << a.index << " " << a.Imie << " " << a.Nazwisko << endl;
    }

    sort(studenci.begin(), studenci.end(), porownaj);

    cout << "\nPosortowani studenci: \n\n";


    for (auto& a : studenci) {
        cout << a.index << " " << a.Imie << " " << a.Nazwisko << endl;
    }*/

    //Zadanie 4

    string ciag = "";
    string dodany = "";
    int n = 0;

    cout << "Podaj string pocz�tkowy: ";
    cin >> ciag;
    cout << "Podaj ilo�� konkatenacji, kt�re chcesz wykona�: ";
    cin >> n;
    cout << endl << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj ci�g znak�w, kt�ry chcesz doda� do poprzedniego: ";
        cin >> dodany;
        ciag = konkatenacja(ciag, dodany);
        cout << "Nowy ci�g znak�w to: " << ciag << endl << endl;
    }

}