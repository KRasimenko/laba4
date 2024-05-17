#include <iostream>
using namespace std;
class Massiv
{
private:
    int* a;

public:
    void Sozd(int k)
    {
        a = new int[k];
    }

    void Vvod_Sl(int k1, int k2)
    {
        for (int i = k1; i <= k2; i++)
        {
            cout << "a[" << i << "]=";
            cin >> a[i];
        }
    }

    void Obrash(int k1, int k2)
    {
        int i;
        cout << "¬ведите номер элемента: ";
        cin >> i;
        if (i >= k1 && i <= k2)
            cout << "a[" << i << "] = " << a[i] << endl;
        else
            cout << "Ёлемент массива с заданным номером отсутствует" << endl;
    }

    void Slozh(Massiv b, Massiv c, int k1, int k2, int h1, int h2)
    {
        for (int i = k1; i <= k2; i++)
        {
            a[i] = b.a[i] + c.a[i];
        }
    }

    void Vichit(Massiv b, Massiv c, int k1, int k2, int h1, int h2)
    {
        for (int i = k1; i <= k2; i++)
        {
            a[i] = b.a[i] - c.a[i];
        }
    }

    void Umnozh(int k1, int k2)
    {
        int x;
        cout << "¬ведите скал€р: ";
        cin >> x;
        for (int i = k1; i <= k2; i++)
        {
            a[i] *= x;
        }
    }

    void Delen(int k1, int k2)
    {
        int x;
        cout << "¬ведите скал€р: ";
        cin >> x;
        if (x != 0)
        {
            for (int i = k1; i <= k2; i++)
            {
                a[i] /= x;
            }
        }
        else
            cout << "ƒеление на ноль невозможно" << endl;
    }

    void Print_el(int k1, int k2)
    {
        int i;
        cout << "¬ведите номер элемента: ";
        cin >> i;
        if (i >= k1 && i <= k2)
            cout << "a[" << i << "] = " << a[i] << endl;
        else
            cout << "Ёлемент массива с заданным номером отсутствует" << endl;
    }

    void Print(int k1, int k2)
    {
        for (int i = k1; i <= k2; i++)
        {
            cout << "a[" << i << "]=";
            cout << a[i] << endl;
        }
    }

    void Del()
    {
        delete[]a;
    }
};