//Метод итераций
#include<iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return  3 * sin(sqrt(x)) + 0.35 * x - 3.84;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n = 0;
    double x;
    double y, b;
    double eps;
    cout << "Введите нулевое приближение:";
    cin >> x;
    cout << "Введите eps:";
    cin >> eps;
    do
    {
        y = f(x);
        b = abs(x - y);
        x = y;
        n++;
    } while (eps <= b && n < 100);
    cout << "Кол-во итераций:" << n << endl;
    cout << "x =" << x << endl;
    return 0;
}