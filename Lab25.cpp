#include <iostream>
using namespace std;

class users_class {
public:
    int first;									//Первая переменная
    int second;
    int c;

    users_class() 
    {									//Конструктор без параметров
        first = 1;
        second = 2;
        c = 0;
    }

    int constructor2(int first, int second) 
    {			//Конструктор с параметрами
        int new_first = first;
        int new_second = second;
    }

    int constuctor3(users_class& b) 
    {					//Конструктор копирования
        int new_first = b.first;
        int new_second = b.second;
    }

    /*	void init(int F, int S){						//Инициализация метода для инициализации переменных
            int first = F;
            int second = S;
        }
    */
    void change() 
    {									//Инициализация метода для изменения полей
        cout << "Введите новые значения first и second: ";
        cin >> first >> second;
    }

    void print() 
    {
        cout << "first: " << first << endl;
        cout << "second: " << second << endl;
    }

    int composition(int F, int S) 
    {					//Инициализация метода для вычисления произведения двух чисел
        return F * S;
    }

    double composition(double F, double S) 
    {			//Перегрузка операции умножения
        return F * S;
    }


    ~users_class() {};								//Деструктор класса
};

class RECTANGLE : public users_class {
public:
    int gipotinuza(int c, int first, int second) {

        c = sqrt(first * first + second * second);
        return c;
    }
};

int main() {
    setlocale(LC_ALL, "rus");																				//Подключили русский язык
    int n;																									//Объявили переменную n для менюшки
    int proizvedenie, gipotinuza;
    users_class method;																						//Объявили метод нашего класса
    RECTANGLE gh;
    do {
        cout << "Переменные инициализированы как: " << method.first << " и " << method.second << endl;		//Собственно сама менюшка
        cout << "1.Поменять значение переменных" << endl;
        cout << "2.Вычислить произведение двух чисел" << endl;
        cout << "3.Вычислить гипотенузу" << endl;
        cout << "4.выход" << endl;
        cout << " --------------------------------------------------------------------" << endl;
        cin >> n;																							//Вводим наше значение
        switch (n) {
        case 1:
            method.change();																			//вызываем метод change класса method
            break;
        case 2:
            proizvedenie = method.composition(method.first, method.second);								//инициализируем переменную как результат возвращения метода composition
            cout << proizvedenie << endl;																//Выводим переменную
            break;
        case 3:
            gipotinuza = gh.gipotinuza(method.c,method.first, method.second);
            cout << "Гипотенуза: " << gipotinuza << endl;
            
            break;
        }
    } while (n != 4);
}

