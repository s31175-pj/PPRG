#include <iostream>
using namespace std;

int main()
{
    //Zadanie rozgrzewkowe
    /*int liczbaOsob;
    int liczbaKawalkow;
    cout << "Ile osob jest na imprezie: ";
    cin >> liczbaOsob;
    cout << "Ile jest kawalkow pizzy: ";
    cin >> liczbaKawalkow;
    cout << "Na osobe przypadlo " << (liczbaKawalkow / liczbaOsob) << " kawalkow pizzy";
    cout << "Dla organizatora zostalo dodatkowo " << (liczbaKawalkow% liczbaOsob) << " kawalkow pizzy";
    return 0*/

    //Zadanie 1

    /*int a=0;
    int b=0;
    cin >> a;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= i; j++) {
            b += j;
        }
    }
    cout  << b;
    return 0;*/

    //Zadanie 2

    /*int a;
    int b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << endl << "Podaj liczbe b: ";
    cin >> b;

    cout << endl << "Oto wiesz dlugosci a = " << a << endl;
    for (int i = 0; i < a; i++) 
        cout << "*";

    cout << endl << "Oto kolumna dlugosci b = " << b << endl;
    for (int i = 0; i < b; i++) 
        cout << "*" << endl;

    cout << endl << "Oto prostokat wielkosci "<< a << " na " << b << ":" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++)
            cout << "*";
        cout << endl;
    }

    cout << endl << "Oto obwod prostokata " << a << " na " << b << ":" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++)
            if (j == 0 || j == a - 1 || i == 0 || i == b - 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }

    cout << endl << "Oto trojkat prostokatny o ramionach dlugosci: " << a << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++)
            if (j<=i)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }

    cout << endl << "Oto trojkat prostokatny o ramionach dlugosci: " << a << endl;
    for (int i = a; i > 0; i--) {
        for (int j = a; j > 0; j--) {
            if (j <= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;*/

    //Zadanie 3

    int a = 0;
    cout << "Podaj miesiac z zakresu 1-12: ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Styczen ma 31 dni i jest w nim pochmurno";
        break;
    case 2:
        cout << "Luty ma 28 dni i jest w nim pochmurno (w roku nieprzestepnym)";
        break;
    case 3:
        cout << "Marzec ma 31 dni i jest w nim pochmurno";
        break;
    case 4:
        cout << "Kwiecien ma 30 dni i jest w nim slonecznie";
        break;
    case 5:
        cout << "Maj ma 31 dni i jest w nim slonecznie";
        break;
    case 6:
        cout << "Czerwiec ma 30 dni i jest w nim slonecznie";
        break;
    case 7:
        cout << "Lipiec ma 31 dni i jest w nim slonecznie";
        break;
    case 8:
        cout << "Sierpien ma 31 dni i jest w nim slonecznie";
        break;
    case 9:
        cout << "Wrzesien ma 30 dni i jest w nim slonecznie";
        break;
    case 10:
        cout << "Pazdziernik ma 31 dni i jest w nim pochmurno";
        break;
    case 11:
        cout << "Listopad ma 30 dni i jest w nim pochmurno";
        break;
    case 12:
        cout << "Grudzien ma 31 dni i jest w nim pochmurno";
        break;
    default:
        cout << "Podano liczbe spoza przedzialu!";
        break;
    }

    return 0;

}