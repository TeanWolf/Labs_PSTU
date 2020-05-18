//Метод половинного деления
#include <iostream>
#include <cmath>
using namespace std;

char ch;

double f(double x)
{
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.84;;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RUS");
    float a, b, x, eps;

    cout << "Введите левый отрезок:";
    cin >> a;
    cout << "Введите правый отрезок:";
    cin >> b;
    cout << "Введите eps:";
    cin >> eps;

    if (a == b)
    {
        cout << "Левая часть не может быть равна правой!";
        return 0;
    }
    if (a > b)
    {
        cout << "Левая часть не может быть больше правой!";
        return 0;
    }
    int n = 1;
    while (eps<= abs(b - a))
    {
        x = (a + b) / 2;
        if (f(x) == 0)
        {
            return 0;
        }
        else
        {
            if (f(a) * f(x) < 0) b = x;
            if (f(a) * f(x) > 0) a = x;
        }
        n++;
    }

    if ((f(x) != 0) && (a <= b))
    {
        cout << "x=" << x << endl;

        cout << "Кол-во интераций:" << n;
    }
    return 0;
}