/* Lab_03_1.cpp
Перепелиця Ілона
Лабораторна робота 3.1
Розгалуження, задане формулою:функція однієї змінної
Варіант 11*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, A, B = 0, y;

    cout << "Enter x: ";
    cin >> x;

    A = 2 * fabs(5 - x);

    if (x <= -1)
        B = exp(fabs(2 + x));

    if (x > -1 && x < 1)
        B = pow(sin(1 / fabs(2 + x)), 2);

    if (x >= 1)
        B = pow(cos(x), 2) / (1 + fabs(sin(x)));

    y = A - B;

    cout << "y = " << y << endl;

    return 0;
}
