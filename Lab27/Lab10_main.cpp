#include "Time.h"
#include <iostream>
#include <fstream>
#include <string>
#include "file_work.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	Time x;
	cin >> x;
	cout << x;
	Time y;
	y = x;
	Time p,p1;
	Time tmp;
	int k, c;
	char file_name[30];
	do
	{
		cout << "\n1. ������� ����";
		cout << "\n2. ����������� ����";
		cout << "\n3. �������� ��������";
		cout << "\n4. �������� ��������";
		cout << "\n5. ��������� ��������";
		cout << "\n0. �����\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "������� ��� �����:"; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "���������� ������� ����!";
			break;
		case 2: cout << "������� ��� �����:"; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "���� ������!\n";
			if (k < 0)cout << "���������� ��������� ����!\n";
			break;
		case 3: cout << "������� ��� �����:"; cin >> file_name;
			cout << "������� ��������:"; cin >> tmp;
			k = del_file(file_name,tmp);
			if (k < 0)cout << "���������� ��������� ����!";
			if (k == 0) cout << "���� ������!\n";
			break;
		case 4:
		{
			cout << "������� ��� �����:";
			cin >> file_name;
			cout << "������� ��������:";
			cin >> tmp;
			cout << "������� ���������� ����� �������:";
			int col;
			cin >> col;
			k = add_file(file_name,col,p,tmp);
			if (k < 0) cout << "���������� ��������� ����\n";
			if (k == 0) k = add_file(file_name, col,p,tmp);
			cout << endl;
			break;
		}
		case 5: cout << "������� ��� �����:";
			cin >> file_name;
			cout << "������� ��������:";
			cin >> tmp;
			k = change_file(file_name,tmp);
			if (k < 0) cout << "\n���������� ��������� ����!";
			break;

		}
	} 
	while (c != 0);
}