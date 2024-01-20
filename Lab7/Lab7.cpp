#include <iostream>
#include <locale.h>

using namespace std;

struct person {
    string name;
    string last_name;
};

int factorial(int a=1) {
    if (a == 1)
        return a;
    else if (a == 0)
        return 0;
    else
        return a * factorial(a - 1);
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

    // Zadanie 1

    /*struct person osoby[3];
    string people[3][2];

    for (int i = 0; i < 3; i++) {
        cout << "Podaj imie osoby nr " << i+1 << ": ";
        cin >> osoby[i].name;
        people[i][0] = osoby[i].name;

        cout << "Podaj nazwisko osoby nr " << i+1 << ": ";
        cin >> osoby[i].last_name;
        people[i][1] = osoby[i].last_name;

    }

    cout << "\nImiona i nazwiska trzech osób: " << endl;

    for (auto x : people) {
        int i = 1;
        cout << "Osoba nr " << i << " " << x[0] << " " << x[1] << endl;
        i++;
    }*/

    // Zadanie 2;

    /*int number = 0;

    cout << "Podaj liczbe: ";
    cin >> number;
    number = factorial(number);
    cout << number << endl;


    cout << "\nTwoja liczba jest podzielna przez ";

    if (number % 2 == 0)
        cout << 2 << " ";
    if (number % 3 == 0)
        cout << 3 << " ";
    if (number % 5 == 0)
        cout << 5 << " ";
    if (number % 11 == 0)
        cout << 11 << " ";*/

    // Zadanie 3

    double r, P;
    double tabela[10][10];
    
    cout << "Podaj promieñ: ";
    cin >> r;
    P = 3.142 * r * r;
    cout << "Pole ko³a wynosi: " << P << endl << endl;

    for (int i=0; i<10;i++)
        for (int j=0;j<10;j++)
        {
            tabela[i][j] = P;
            P += 3;
        }

    for (auto &row:tabela)
    {
        for (auto &col : row)
            cout << "[" << col << "] ";
            cout << endl;
    }

    //for (auto )
}
