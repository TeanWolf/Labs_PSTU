#include <iostream>;
#include <string>;
#include <ctime>;
#include <windows.h>;
using namespace std;
struct Table
{
	string* FIO;
	int account[10];
	int amount[6];
	Table* next;
	Table* prev;
};
Table** hashs;
int coliz = 0;
Table* create_obj(string names[], string surnames[], string midlenames[])
{
	Table* p = new Table;
	for (int i = 0; i < 10; i++)
	{
		p->account[i] = rand() % 9;
}
	for (int i = 0; i < 6; i++)
	{
		p->amount[i] = rand() % 5;
	}
	string FIO1[6];
	int k;
	k = rand() % 9;
	FIO1[0] = surnames[k];
	k = rand() % 9;
	FIO1[1] = ' ';
	FIO1[2] = names[k];
	k = rand() % 9;
	FIO1[3] = ' ';
	FIO1[4] = midlenames[k];
	p ->FIO = new string[6];
	for (int i = 0; i <6; i++)
	{
		p ->FIO[i] = FIO1[i];
	}
	p ->next = NULL;
	p ->prev = NULL;
	return p;
}
void Print(Table* p)
{
	for (int i = 0; i<10; i++)
	{
		cout<<p ->account[i];
	}
	cout<<'\t';
	for (int i = 0; i < 6; i++)
	{
		cout << p->amount[i];
	}
	cout << '\t';
	for (int i = 0; i <6; i++)
	{
		cout << p ->FIO[i];
	}
	cout <<endl;
}
int hash_func(string key[])
{
	int h = 0;
	int k = 0;
	int* ascii = new int[key[0].length()];
	for (int i = 0; i <key[0].length(); i++)
	{
		ascii[i] = key[0][i];
		k += ascii[i];
	}
	delete[]ascii;
	ascii = new int[key[2].length()];
	for (int i = 0; i<key[2].length(); i++)
	{
		ascii[i] = key[2][i];
		k += ascii[i];
	}
	delete[]ascii;
	ascii = new int[key[4].length()];
	for (int i = 0; i<key[4].length(); i++)
	{
		ascii[i] = key[4][i];
		k += ascii[i];
	}
	delete[]ascii;
	h = -k % 50;
	return h;
}
void create_table(Table* p)
{
	int h = hash_func(p ->FIO);
	cout<<h<<" ";
	if (hashs[h] != NULL)
	{
		hashs[h] ->next = p;
		p ->prev = hashs[h];
		hashs[h] = hashs[h] ->next;
		Print(hashs[h]);
		coliz++;
	}
	else
	{
		hashs[h] = p;
		Print(hashs[h]);
	}
}
void search_key(string key[])
{
	int h = hash_func(key);
	cout<<h<<" ";
	Table* r = hashs[h];
	if (r ->prev == NULL)
	{
		Print(r);
	}
	else
	{
		do
		{
			if (r ->FIO[0] == key[0] &&r ->FIO[2] == key[2] && r ->FIO[4] ==key[4])
			{
				Print(r);
				return;
			}
			else
			{
				r = r ->prev;
			}
		} while (r != NULL);
	}
}
int main()
{
	setlocale(LC_ALL,"RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	string names[10] = {"Роман","Вадим","Эдуард","Дмитрий","Герман","Геннадий","Вячеслав","Евгений","Иван","Денис" };
	string surnames[10] = {"Гребенщиков","Кобяков","Серябков","Лосевский","Витвинин","Батурин","Кабальнов","Кабальнов","Попырин","Ноздрёв" };
	string midlenames[10] = {"Игоревич","Вячеславович","Георгиевич","Федорочев","Леонидович","Михайлович","Валериевич","Владиславович","Матвеевич","Маркович"};
	Table* p = NULL;
	int n;
	cout <<"Введите количество элементов таблицы(50<) :";
	cin >> n;
	hashs = new Table * [n];
	for (int i = 0; i < n; i++)
	{
		hashs[i] = NULL;
	}
	for (int i = 0; i < 100; i++)
	{
		p = create_obj(names, surnames, midlenames);
		create_table(p);
	}
	cout <<"Количество коллизий :" << coliz << endl;
	cout << "Введите ФИО:";
	string search[6];
	cin >> search[0];
	cin >> search[2];
	cin >> search[4];
	search[1] =' '; search[3] = ' ';
	search_key(search);
}

