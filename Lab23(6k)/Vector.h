#pragma once
#include <iostream>
using namespace std;
class iteratorF
{
	friend class Vector;
public:
	iteratorF() { elem = 0; };
	iteratorF(const iteratorF& p) { elem = p.elem; };
	bool operator!=(const iteratorF& it) { return elem != it.elem; };
	void operator++() { ++ elem; }
	int& operator*()const { return*elem; }
private:
	int* elem;
};
class Vector
{
public:
	Vector(int s);
	Vector(const Vector& p);
	~Vector();
	Vector& operator=(const Vector& p);
	int& operator[](int index); 
	int operator()();
	void operator+(const Vector& p);
	friend istream& operator>> (istream& in, Vector& p);
	friend ostream&  operator<<(ostream& out, const Vector& p);
	Vector operator+(const int k);
	iteratorF first() { return beg; };
	iteratorF last() { return end; };
private:
	int size;
	int* data;
	iteratorF beg;
	iteratorF end;
};