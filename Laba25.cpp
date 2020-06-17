#include <iostream>
using namespace std;

class users_class {
public:
    int first;									
    int second;
    int c;

    users_class()
    {								
        first = 1;
        second = 2;
        c = 0;
    }

    int constructor2(int first, int second)
    {		
        int new_first = first;
        int new_second = second;
    }

    int constuctor3(users_class& b)
    {					
        int new_first = b.first;
        int new_second = b.second;
    }
    void change()
    {								
        cout << "Введите новые значения first: ";
        cin >> first;
            cout << " Введите новые значения second:";
            cin >> second;
    }

    void print()
    {
        cout << "first: " << first << endl;
        cout << "second: " << second << endl;
    }

    int composition(int F, int S)
    {					
        return F * S;
    }

    double composition(double F, double S)
    {	
        return F * S;
    }


    ~users_class() {};								
};

class RECTANGLE : public users_class {
public:
    int gipotinuza(int c, int first, int second) {

        c = sqrt(first * first + second * second);
        return c;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");																				
    int n;																							
    int UMNOZ, gip;
    users_class method;																						
    RECTANGLE gh;
    do {
        cout << "Переменные инициализированы как: " << method.first << " и " << method.second << endl;		
        cout << "1.Поменять значение переменных" << endl;
        cout << "2.Вычислить произведение двух чисел" << endl;
        cout << "3.Вычислить гипотенузу" << endl;
        cout << "4.Выход" << endl;
        cin >> n;																							
        switch (n) {
        case 1:
            method.change();																			
            break;
        case 2:
            UMNOZ = method.composition(method.first, method.second);								
            cout<<"Произведение:" << UMNOZ << endl;																
            break;
        case 3:
            gip = gh.gipotinuza(method.c, method.first, method.second);
            cout << "Гипотенуза: " << gip << endl;

            break;
        }
    } while (n != 4);
}