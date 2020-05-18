#pragma once
struct NodeF
{
	int name;
	NodeF* next;
};
struct NodeS
{
	char* name;
	NodeS* next;
	NodeS* prev;
};
NodeF* make_listF(int n);
NodeS* make_listS(int n);