#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue <int> P;//������� � ������������
	P.push(27); //�������� ��������
	P.push(50);
	P.push(4025);
	P.push(6512);
	P.push(8);
	//���� ������ �� ������
	while (!P.empty())
	{
		cout << P.top() << ' ';//������� ������ �������
		P.pop();//������� ������� �� ������
	}
}