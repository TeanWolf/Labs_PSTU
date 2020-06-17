#include <iostream>
#include <cstring>

using namespace std;
int n;
double c, h;
struct list
{
	double field;
	list* next;
	list* prev;
};
list* init(int n)
{
	list* lst;
	list* temp, * p, * s;
	lst = new list;
	lst->next = NULL;
	lst->prev = NULL;
	cout << "\nВведите элементы:";
	cin >> lst->field;
	p = lst;
	for (int i = 1; i < n; i++)
	{
		temp = new list;
		cin >> temp->field;
		p->next = temp;
		temp->next = 0;
		temp->prev = p;
		p = temp;

	}
	return lst;
}
void listprint(list* lst)
{
	cout << "\nНачальный массив: ";
	list* p;
	p = lst;
	do {
		cout << p->field << "\t";
		p = p->next;
	} while (p != NULL);
}


list* add(list* lst, double symbol, double given_data) {
	list* cursor = lst;
	while (cursor != 0) {
		double suspicious_double = cursor->field;
		bool inserted = false;
		if (suspicious_double == symbol) {
			list* new_element = new list;
			new_element->field = given_data;
			new_element->next = cursor->next;
			new_element->prev = cursor;
			cursor->next = new_element;
			inserted = true;
		}
		if (inserted) cursor = cursor->next;
		cursor = cursor->next;
	}
	return lst;
}
void print_list(list* lst)
{
	cout << "Конечный массив: ";
	list* p;
	p = lst;
	do {
		cout << p->field << "\t";
		p = p->next;
	} while (p != NULL);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите количество элементов:";
	cin >> n;
	list* lst = init(n);
	listprint(lst);

	double symbol, new_data;

	cout << "\nВведите значение информационного поля: ";
	cin >> symbol;
	cout << "\nВведите значение нового элемента: ";
	cin >> new_data;

	list* new_list = add(lst, symbol, new_data);
	print_list(lst);
	return 0;

}
