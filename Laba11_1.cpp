//Метод Ньютона
#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.84;
}

double df(double x)
{
    return (3 * cos(sqrt(x)) / (2 * sqrt(x))) + (7 / 20);
}

double g(double x)
{
    return x - f(x) / df(x);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    double x;
    double eps;
    cout << "Введите нулевое приближение:";
    cin >> x;
    cout << "Введите eps:";
    cin >> eps;
    int n;
    for (n = 1; eps < abs(f(x)); n++)
    {
        if (df(x) == 0)
        {
            break;
        }
        else
        {
            x = g(x);
        }
    }
    cout << "Кол-во итераций:" << n << endl;
    cout << "x=" << x << endl;
    return 0;
}