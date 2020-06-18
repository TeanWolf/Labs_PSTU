#pragma once
#include <iostream>
#include <vector>
#include "glut.h"
#include <string>
using namespace std;

extern int maxSize;

extern int WinW, WinH, R;

template <typename T>
class Graph {
public:
	Graph();
	~Graph();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	int GetAmountOfVerts();
	int GetAmountOfEdges();
	int GetWeight(const T& vertex1, const T& vertex2);
	vector<T> GetNbrs(const T& vertex);
	void InsertVertex(const T& vertex);
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void FillLabels(T& startVertex);
	void Dijsktra(T& startVertex);
	bool AllVisited(bool* visitedVerts);
	void Print();
	void DrawGraph();
private:
	T adjMatrix[20][20];
	vector<T> vertList;
	vector<int> labelList;
};

extern Graph <int> graph;

template <typename T>
Graph<T>::Graph() {
	for (int i = 0; i < maxSize; ++i) {
		for (int j = 0; j < maxSize; ++j) {
			this->adjMatrix[i][j] = 0;
		}
	}
}

template <typename T>
Graph<T>::~Graph() { }

template <typename T>
int Graph<T>::GetVertPos(const T& vertex) {
	for (int i = 0; i < this->vertList.size(); ++i) {
		if (this->vertList[i] == vertex) return i;
	}
	return -1;
}

template <typename T>
bool Graph<T>::IsEmpty() {
	if (this->vertList.size() != 0) return false;
	else return true;
}

template <typename T>
bool Graph<T>::IsFull() {
	return (vertList.size() == maxSize);
}

template <typename T>
int Graph<T>::GetAmountOfVerts() {
	return this->vertList.size();
}

template<class T>
int Graph<T>::GetAmountOfEdges() {
	int amount = 0; 
	if (!this->IsEmpty()) { 
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			for (int j = 0; j < vertListSize; ++j) {
				if (this->adjMatrix[i][j] == 1) 
					amount += 1;
			}
		}
		return amount; 
	}
	else
		return 0;
}

template <typename T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2)
{
	if (!this->IsEmpty())
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	else return 0;
}

template<class T>
std::vector<T> Graph<T>::GetNbrs(const T& vertex) {
	std::vector<T> nbrsList; 
	int pos = this->GetVertPos(vertex); 
	if (pos != (-1)) { 
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			if (this->adjMatrix[pos][i] != 0)
				nbrsList.push_back(this->vertList[i]); 
		}
	}
	return nbrsList; 
}

template <typename T>
void Graph<T>::InsertVertex(const T& vertex)
{
	if (!this->IsFull()) this->vertList.push_back(vertex);
	else {
		cout << "Граф заполнен. Невохможно добавить новую вершину" << endl;
		return;
	}
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0) 
		{
			cout << "Ребро между этими вершинами уже существует" << endl;
			return;
		}
		else 
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
		}
	}
	else 
	{
		cout << "Обеих вершин (или одной из них) нет в графе " << endl;
		return;
	}
}

template <typename T>
void Graph<T>::FillLabels(T& startVertex)
{
	for (int i = 0, size = vertList.size(); i < size; ++i)
	{
		labelList.push_back(1000000);

	}
	int pos = GetVertPos(startVertex);
	labelList[pos] = 0;
}

template <typename T>
bool Graph<T>::AllVisited(bool* visitedVerts)
{
	bool flag = true;
	for (int i = 0; i < vertList.size(); ++i)
	{
		if (visitedVerts[i] != true) flag = false;
	}
	return flag;
}

template <typename T>
void Graph<T>::Dijsktra(T& startVert)
{
	int way[6]; 
	int ind, i, u;
	int start = startVert;
	bool visit[6];
	for (i = 0; i < 6; i++)
	{
		way[i] = INT_MAX; visit[i] = false;
	}
	way[startVert - 1] = 0;
	for (int j = 0; j < 6 - 1; j++)
	{
		int min = INT_MAX;
		for (i = 0; i < 6; i++)
			if (!visit[i] && way[i] <= min)
			{
				min = way[i]; ind = i;
			}
		u = ind;
		visit[u] = true;
		for (i = 0; i < 6; i++)
			if (!visit[i] && adjMatrix[u][i] && way[u] != INT_MAX && way[u] + adjMatrix[u][i] < way[i])
			{
				way[i] = way[u] + adjMatrix[u][i];
			}
	}
	cout << "Оптимальный путь из первой вершины до последней:\n";
	for (i = 5; i < 6; i++) 
		if (way[i] != INT_MAX)
		{
			cout << start << " -> " << i + 1 << " = " << way[i] << endl;
		}
	    else 
			cout << start << " -> " << i + 1 << " = " << "Прохода нет!" << endl;
}


template <typename T>
void Graph<T>::Print()
{
	if (!this->IsEmpty()) {
		cout << "Матрица смежности графа:" << endl;
		cout << " " << " ";
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) 
		{
			cout << "  " << this->vertList[i] << "  ";
		}
		cout << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) 
		{
			cout << this->vertList[i] << "  ";
			for (int j = 0; j < vertListSize; ++j) {
				cout << "  " << this->adjMatrix[i][j] << "  ";
			}
			cout << endl;
		}
	}
	else cout << "Граф пуст" << endl;
}

Graph<int> makeGraph();
extern struct vertCoord;
struct vertCoord {
	int x, y;
};
extern vertCoord vertC[20];
void setCoord(int i, int n);
void drawCircle(int x, int y, int R);
void drawText(int num, int x1, int y1);
void drawVertex(int n);
void drawDirect(int x0, int y0, int x1, int y1);
void drawLine(int text, int x0, int y0, int x1, int y1);
void reshape(int w, int h);
void display();

template <typename T>
void Graph<T>::DrawGraph() 
{
	int n = vertList.size();
	for (int i = 0; i < n; ++i) { setCoord(i, n); }

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) 
		{
			int a = adjMatrix[i][j];
			if (a != 0) {
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	drawVertex(n);
}
