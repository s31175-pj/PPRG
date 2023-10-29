
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int factorial(int x) {
    int a = 1;
    if (x == 0) return 1;

    for (int i = 1; i <= x; i++) {
        a *= i;
    }
    //cout << " ." << a << ". ";
    return a;
}

int main()
{

    //Zadanie 1
    /*
    float x = 0;
    float y = 0;
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "\nPodaj liczbe y: ";
    cin >> y;

    cout << "\n\nSuma = " << setprecision(2) << fixed << (x + y);
    cout << "\nRoznica = " << setprecision(2) << fixed << (x - y);
    cout << "\nIloczyn = " << setprecision(2) << fixed << (x * y);
    cout << "\nIloraz = " << setprecision(2) << fixed << (x / y);
    */

    //Zadanie 2
    /*
    char znak;
    do {
        cout << "Wprowadz znak: ";
        cin >> znak;
        cout << "Twoj znak: " << znak << "\n\n";
    } while (znak != 't');
    */

    //Zadanie 3
    /*
    int a = 0;
    int b = 0;
    int c = 0;
    int delta = 0;

    cout << "Postac rownania kwadratowego: ax^2 + bx + c = 0";
    cout << "\n\nPodaj a: ";
    cin >> a;
    //cout << (a^2);
    cout << "\nPodaj b: ";
    cin >> b;
    cout << "\nPodaj c: ";
    cin >> c;
    cout << "\n\nTwoje rownanie: " << a << "x^2 + " << b << "x + " << c << " = 0";
    
    delta = pow(b, 2) - 4 * a * c;
    cout << "\n\ndelta: " << delta;

    cout << "\n\nx1 = " << (-b + sqrt(delta)) / (2 * a);
    cout << "\n\nx1 = " << (-b - sqrt(delta)) / (2 * a);
    */

    //Zadanie 4

    int x = 0;
    
    cout << "Podaj wielkosc trojkata: ";
    cin >> x;
    cout << "\n\n";

    int s = factorial(x) / (factorial(x / 2) * factorial(x - (x / 2)));
    int d = to_string(s).length();

    cout << "s: " << s << " d: " << d << endl;
    

    for (int i = 0; i <= x; i++) {
        for (int r = 3 * x; r >= i; r--) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            int y = factorial(i) / (factorial(j) * factorial(i - j));
            cout << y;
            for (int k = 0; k <= d - to_string(y).length(); k++) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
