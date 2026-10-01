/* Lab_03_1.cpp
Перепелиця Ілона
Лабораторна робота 3.1
Розгалуження, задане формулою: функція однієї змінної
Варіант 11 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, A, B1 = 0, B2 = 0, y1, y2;

    cout << "Enter x: ";
    cin >> x;

    A = 2 * fabs(5 - x);

    // Спосіб 1: розгалуження в скороченій формі (без else)
    if (x <= -1)
        B1 = exp(fabs(2 + x));
    if (x > -1 && x < 1)
        B1 = pow(sin(1 / fabs(2 + x)), 2);
    if (x >= 1)
        B1 = pow(cos(x), 2) / (1 + fabs(sin(x)));
    y1 = A - B1;

    // Спосіб 2: розгалуження в повній формі (if - else)
    if (x <= -1)
        B2 = exp(fabs(2 + x));
    else if (x >= 1)
        B2 = pow(cos(x), 2) / (1 + fabs(sin(x)));
    else
        B2 = pow(sin(1 / fabs(2 + x)), 2);
    y2 = A - B2;

    cout << "y (short form) = " << y1 << endl;
    cout << "y (full form)  = " << y2 << endl;

    return 0;
}
