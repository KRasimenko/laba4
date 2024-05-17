#include <iostream>
#include <stdlib.h>
#include "Header.h"
using namespace std;



int main()
{

    setlocale(LC_ALL, "RUS");

    int k1, k2, h1, h2;
    int x;
    Massiv a, b, c;
    cout << "Введите граничные индексы первого массива: ";
    cin >> k1 >> k2;
    a.Sozd(k2 - k1 + 1);
    a.Vvod_Sl(k1, k2);
    cout << "Введите граничные индексы второго массива: ";
    cin >> h1 >> h2;
    b.Sozd(h2 - h1 + 1);
    b.Vvod_Sl(h1, h2);
    cout << "Введите граничные индексы третьего массива: ";
    cin >> k1 >> k2;
    c.Sozd(k2 - k1 + 1);
    c.Vvod_Sl(k1, k2);
    int t;
    do
    {
        cout << "1. Сложение двух массивов" << endl;
        cout << "2. Вычитание двух массивов" << endl;
        cout << "3. Умножение элементов массива на скаляр" << endl;
        cout << "4. Деление элементов массива на скаляр" << endl;
        cout << "5. Обращение к элементу массива по индексу" << endl;
        cout << "6. Вывод на печать всего массива" << endl;
        cout << "7. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> t;
        switch (t)
        {
        case 1:
            a.Slozh(b, c, k1, k2, h1, h2);
            cout << "Сумма двух массивов: " << endl;
            a.Print(k1, k2);
            break;
        case 2:
            a.Vichit(b, c, k1, k2, h1, h2);
            cout << "Разность двух массивов: " << endl;
            a.Print(k1, k2);
            break;
        case 3:
            cout << "Введите граничные индексы массива: ";
            cin >> k1 >> k2;
            a.Umnozh(k1, k2);
            cout << "Массив после умножения элементов на скаляр: " << endl;
            a.Print(k1, k2);
            break;
        case 4:
            cout << "Введите граничные индексы массива: ";
            cin >> k1 >> k2;
            a.Delen(k1, k2);
            cout << "Массив после деления элементов на скаляр: " << endl;
            a.Print(k1, k2);
            break;
        case 5:
            cout << "Введите граничные индексы массива: ";
            cin >> k1 >> k2;
            a.Obrash(k1, k2);
            break;
        case 6:
            cout << "Введите граничные индексы массива: ";
            cin >> k1 >> k2;
            a.Print(k1, k2);
            break;
        case 7:
            a.Del();
            b.Del();
            c.Del();
            return 0;
        default:
            cout << "Неправильный номер пункта" << endl;
        }
    } while (1);

    return 0;
}
