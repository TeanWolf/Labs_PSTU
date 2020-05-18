#pragma once
#include "Time.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc);
	if (!stream)return -1;
	int n;
	Time p;
	cout << "Введите количество элементов:"; cin >> n;
	cout << "\nВведите элементы:";
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p << "\n";
	}
	stream.close();
	return n;
}
int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Time p; int i = 0;
	while (stream >> p)
	{
		cout << p << "\n";
		i++;
	}
	stream.close();
	return i;
}
int del_file(const char* f_name,Time tmp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	int i = 0; Time p;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p == tmp) {}
		else
		{
			temp << p;
	}
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}
int add_file(const char* f_name, int col,Time pp, Time tmp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Time p; int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p == tmp)
		{
			temp << p;
			for (int j = 0; j < col; j++)
			{
				cin >> pp;
				temp << pp<<endl;
				l++;
			}
		}
		else
		{
			temp << p;
		}
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}
int add_end(const char* f_name, Time pp)
{
	fstream stream(f_name, ios::app);
	if (!stream)return -1;
	stream << pp;
	return 1;
}
int change_file(const char* f_name, Time tmp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Time p; int i = 0; int l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p == tmp)
		{
			p = p+90;
			temp<<p;
		}
		else temp<<p;
	}
	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}