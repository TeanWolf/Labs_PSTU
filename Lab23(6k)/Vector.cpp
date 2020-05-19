#include<iostream>
#include"Vector.h"
using namespace std;
Vector::Vector(int s)
{
	size = s;
	data = new int[size];
	data[0] = 0;
	for (int i = 1; i < size; i++)
	{
		data[i] = 0;
	}
	beg.elem = &data[0];
	end.elem = &data[size];
}
Vector::Vector(const Vector& v)
{
	size = v.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
}
Vector::~Vector()
{
	delete[] data;
	data = 0;
}
Vector& Vector::operator=(const Vector& v)
{
	if (this == &v) return *this;
	size = v.size;
	if (data != 0) delete[] data;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
	return *this;
}
int& Vector::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "Индекс меньше длины списка\n";
}
istream& operator>> (istream& in, Vector& v)
{
	cout << "Заполните " << v.size << " элементов:\n";
	for (int i = 0; i < v.size; i++)

	{
		in >> v.data[i];
	}
	return in;
}
ostream& operator<<(ostream& out, const Vector& v)
{
	for (int i = 0; i < v.size; i++)
	{
		out << v.data[i] << ' ';
	}
	return out;
}
Vector Vector::operator+(const int k)
{
	Vector tmp(size);
	for (int i = 0; i < size; ++i)
		tmp.data[i] += data[i] + k;
	return tmp;
}
void Vector::operator+(const Vector& v)
{
	cout<<"Введите индекс : \n";
	int index;
	cin>>index;
	data[index] += v.data[index];
	cout<<"Значение:" <<data[index];
}