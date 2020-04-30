#include <iostream>
#include<Windows.h>
using namespace std;

struct State
{
    char name[100];
    char capital[100];
    long population;
    long area;

};
//Записываем гос-во
void ReadState(State& state)
{
    cout << "Введите название государства: ";
    cin >> state.name;
    cout << "Введите название столицы: ";
    cin >> state.capital;
    cout << "Введите население государства: ";
    cin >> state.population;
    cout << "Введите площадь государства: ";
    cin >> state.area;
}
//Выводим гос-во
void PrintArray(State* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << "[ " << arr[i].name << ", "
        << arr[i].capital << ", "
        << arr[i].population << ", "
        << arr[i].area << " ]\n";
}
// удалить государство с индексом из массива
void RemoveState(int index, State arr[], int& size)
{
    --size;
    for (int i = index; i < size; i++)
        arr[i] = arr[i + 1];
}
// добавить гос-во после элемента с индексом
void AddState(int index, const State state, State arr[], int& size)
{
    for (int i = size; i >= index + 2; i--)
        arr[i] = arr[i - 1];
    arr[index + 1] = state;
    ++size;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N; 
    State* Array;
    cout << "Введите кол-во государств: ";
    cin >> N;
    Array = new State[N + 1];
    for (int i = 0; i < N; i++)
        ReadState(Array[i]);
    long least;
    cout << "Введите наименьшую численность: ";
    cin >> least;
    int i = 0;
    while (i < N)
    {
        if (Array[i].population < least)
            RemoveState(i, Array, N);
        else
            ++i;
    }
    setlocale(LC_ALL, "RUS");
    PrintArray(Array, N);
    int index;
    while (1)
    {
        cout << "Введите номер государства, после которого вы хотите добавить новое государство: ";
        cin >> index;
        if (index >= 0 && index < N)
            break;
        else
            cout << "Введите верный номер\n";
    }
    State newState;
    ReadState(newState);
    AddState(index, newState, Array, N);
    PrintArray(Array, N);
    delete[] Array;
    return 0;
}