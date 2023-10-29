

#include <iostream>

using namespace std;

int main()
{
   // cout << "Imię: Piotr\n";
   // cout << "Nr studenta: S31175\n";
    //cout << "Nazwa uczelni: PJATK\n";

    /*
    int liczbaCalkowita = 0;
    cin >> liczbaCalkowita;
    if (!cin)
    {
        cout << "Wprowadzono niepoprawna liczbe";
        return 1;
    }
    if (liczbaCalkowita > 0) {
        cout << "Podana liczba jest dodatnia";
    }
    else if (liczbaCalkowita < 0) {
        cout << "Podana liczba jest ujemna";
    }
    else if (liczbaCalkowita == 0) {
        cout << "Podana liczba jest rowna 0";
    }
    */

    /*
    int liczba = 0;
    cin >> liczba;
    if (liczba == 0) 
        cout << "Podana liczba jest rowna 0";
     else if (liczba % 2 != 0) 
        cout << "Podana liczba jest nieparzysta";
    else if (liczba % 2 == 0)
        cout << "Podana liczba jest parzysta";
    */

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Podaj liczbe a:";
    cin >> a;
    cout << "Podaj liczbe b:";
    cin >> b;
    cout << "Podaj liczbe c:";
    cin >> c;
    
    //Sposób 1

    /*
    if (a > b)
        b = a;
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    if (a > c)
        c = a;
    cout << a;
    */

    //Sposób 2

    /*
    if (a >= b){
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }
    */

    if (a > b && a > c)
        cout << a;
    else if (b > c)
        cout << b;
    else
        cout << c;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
