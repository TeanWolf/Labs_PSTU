#include <iostream>;
#include <Windows.h>;
#include"Node.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Одноаправленый список" << endl;
	int n;
	cout << "Длина списка:";
	cin >> n;
	NodeF* list = make_listF(n);
	bool yes = false;
	if (list->name % 2 == 0)
	{
		NodeF* nuz = list;
		list = list->next;
		delete nuz;
		yes = true;
		n--;
	}
	NodeF* nazvanieF = list;
	for (int i = 2; i <= n && !yes; i++)
	{
		if (nazvanieF->next->name % 2 == 0)
		{
			NodeF* nuz = nazvanieF->next;
			nazvanieF->next = nazvanieF->next->next;
			delete nuz;
			yes = true;
			n--;
		}
		nazvanieF = nazvanieF->next;
	}

	nazvanieF = list;
	for (int i = 1; i <= n; i++)
	{
		cout << nazvanieF->name << ' ';
		nazvanieF = nazvanieF->next;
	}
	cout << "\nДвунаправленый список" << endl;
	cout << "Длина списка:";
	cin >> n;
	NodeS* listS = make_listS(n);
	NodeS* nazvanieS = listS;
	int num;
	char element;
	do
	{
		cout << "Введите номер элемента:";
		cin >> num;
	} while (num > n);
	cout << "\nВведите элемент:";
	cin >> element;
	for (int i = 1; i < num; i++)
	{
		nazvanieS = nazvanieS->next;
	}
	NodeS* zap = nazvanieS;
	NodeS* new_el = new NodeS;
	new_el->name = &element;
	new_el->next = zap;
	new_el->prev = zap->prev;
	zap->prev = new_el;
	zap->prev->prev->next = new_el;
	n++;
	for (int i = 1; i <= n; i++)
	{
		cout << *(listS->name) << ' ';
		if (listS->next != NULL)
		{
			listS = listS->next;
			delete listS->prev;
		}
		else
		{
			delete listS;
		}
	}
}