#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue <int> P;//очередь с приоритетами
	P.push(27); //добавить элементы
	P.push(50);
	P.push(4025);
	P.push(6512);
	P.push(8);
	//пока оередь не пустая
	while (!P.empty())
	{
		cout << P.top() << ' ';//вывести первый элемент
		P.pop();//удалить элемент из начала
	}
}