

#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int maneuvers(int size = 1, int rotation = 0, int col = 0, int row = 0);

char sign = '.';
int columns, rows;

void print_shape(int size=1, int rotation=0, int col = 10, int row = 10)
{
    system("cls");
    //switch(rotation)

    for (int i = 0; i < row; i++) {
        cout << endl;
    }
    for (int i = 0; i < col; i++) {
        cout << " ";
    }

    for (int i = size; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            if (i==size || j == 1 || j == i)
                cout << sign;
            else
                cout << " ";
        }
        cout << endl;
        for (int i = 0; i < col; i++) {
            cout << " ";
        }

    }

    for (int i = 0; i < (rows - row - size-1); i++) {
        cout << endl;
    }

    maneuvers(size, rotation, col, row);

}

int maneuvers(int size, int rotation, int col, int row) {

    cout << "U¿ywaj ^ v < > aby poruszaæ figur¹, oraz + - aby zmieniæ jej rozmiar. Naciœnij ESC aby zakoñczyæ dzia³anie programu ";

    int ch = _getch();

    if (ch == 224) 
    {
        switch (_getch()) {
        case 72:
            print_shape(size, 0, col, row-1);
            break;
        case 75:
            print_shape(size, 0, col-1, row);
            break;
        case 77:
            print_shape(size, 0, col+1, row);
            break;
        case 80:
            print_shape(size, 0, col, row+1);
            break;
        case 27:
            system("pause");
            return 0;
        }
    }
    else if (ch == 43) {
        print_shape(size+1, 0, col, row);
    }
    else if (ch == 95) {
        print_shape(size-1, 0, col, row);
    }
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

//    maneuvers();

    // wczytywanie szerokoœci ekranu

    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // 

    int ascii_sign = 0;
    int size = 0;
    int exit = 0;

    do {
        cout << "WprowadŸ znak ASCII(przedzia³ 33-126): ";
        cin >> ascii_sign;
        sign = char(ascii_sign);
        cout << endl << sign << endl;
        if (ascii_sign > 32 && ascii_sign < 127)
            exit = 1;
        else
            cout << "Wprowadzono niew³aœciwy znak, ponownie podaj znak: ";
    } while (exit != 1);

    cout << endl << "WprowadŸ pocz¹tkow¹ wielkoœæ figury: ";
    cin >> size;

    print_shape(size, 0, columns/2, rows/2);


}