#include <iostream>;
#include <Windows.h>;
#include"Node.h"
using namespace std;
NodeF* make_listF(int n)
{
	
	NodeF* beg = NULL, * p, * r;
	p = new NodeF;
	cin>>p ->name;
	beg = p;
	for (int i = 2; i <= n; i++)
	{
		r = new NodeF; 
		cin>> r ->name;

		p ->next = r; 
		r ->next = NULL; 
		p = r;
	}
	return beg;
}
NodeS* make_listS(int n)
{
	NodeS* beg = NULL, * p, * r;
	p = new NodeS;
	p->name = new char;
	cin >> *(p->name);
	beg = p;
	p->prev = NULL;
	for (int i = 2; i <= n; i++)
	{
		r = new NodeS;
		r->name = new char;
		cin >> *(r->name);
		p->next = r;
		r->next = NULL;
		r->prev = p;
		p = r;
	}
	return beg;
}
