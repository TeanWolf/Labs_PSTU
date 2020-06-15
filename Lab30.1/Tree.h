#pragma once
//#include "stdafx.h"
#include <glut.h>
#include <iostream>
#include<vector>



//////////////////////////////////////////////////////////////////////////////////
using namespace std;
template <class T>
class Tree {
private:
	T data; //данные типа Т
	Tree* left; //указатель на узел слева
	Tree* right; //указатель на узел справа
	Tree* parent; //указатель на предка

public:
	int node_x;
	int node_y;
	int text_x;
	int text_y;

	Tree(T); //конструктор
	~Tree(); //деструктор
	void insertLeft(T); //вставить узел слева
	void insertRight(T); //вставить узел справа
	void insertNode(T dt);
	void setData(T dt) { data = dt; } //установить данные для узла
	T getData() { if (this != NULL) return data; else return NULL; } //получить данные с узла
	Tree<T>* getLeft() { return left; } //получить левый узел
	Tree<T>* getRight() { return right; } //получить правый узел
	Tree<T>* getParent() { return parent; } //получить родителя

	void addLeftTree(Tree<T>* tree) { left = tree; } // добавить поддерево слева
	void addRightTree(Tree<T>* tree) { right = tree; } //добавить поддерево справа
	Tree<T>* ejectLeft(); //извлечь поддерево слева
	Tree<T>* ejectRight(); //извлечь поддерево справа

	void deleteLeft(); //удалить поддерево слева
	void deleteRight(); //удалить поддерево справа
	void deleteNode();

	
	static void preOrder(Tree<T>*); //пройти дерево с печатью элементов в прямом порядке (сверху вниз)
	static void inOrder(Tree<T>*); //пройти дерево с печатью элементов в симметричном порядке (слева направо)
	static void postOrder(Tree<T>*); //пройти дерево с печатью элементов в обратном порядке (снизу вверх)
	Tree<T>* copyTree(); //скопировать дерево
	
	void obh(Tree<T>* node); //прохождение по дереву и записывание в файл
	void printTree(int); //печать дерева под прямым углом (горизонтально)
	void printVTree(int); //печать дерева вертикально
	
	void printVTree2(); //печать дерева вертикально (2)
	int getAmountOfNodes(); //получить количество элементов дерева
	int getHeight(); //получить высоту дерева (считает с текущего узла по направлению к листьям)
	void levelScan(); //проходить по каждому уровню дерева, начиная с корня, и вывести элементы
	void deleteTree() { delete this; } //удалить дерево
	Tree<T>* replaceNULLforEmpty(); //если дерево неполное, сделать его полным (недостающие узлы приобретут данные NULL)
	
	void findElement_insertLeft(Tree<T>*, T, T); //найти элемент и добавить к нему слева узел
	void findElement_insertRight(Tree<T>*, T, T); //найти элемент и добавить к нему справа узел
	static Tree<T>* balancedTree(int n); //построить идеально сбалансированное дерево по данному количеству элементов

	//opengl
	void setCoordsForText(int k, int shift);//определить координаты для текста
	void setCoordsForNode(int window_width, int window_height,
		int shift,int tree_width,int tree_height,int x,int y, int R);//определить координаты узла
	Tree* getNodeByCoords(int x, int y, int R);//вернуть координаты узла
	//рисовать дерево
	void drawTree(int argc, char** argv,int window_width, int window_height,int shift, int k);

	Tree<T>* ToSearchTree();
	static void toArr(Tree<T>* node, vector<T>& arr); //в массив

	Tree<T>* findElement(T); //найти элемент
	Tree<T>* next();
	Tree<T>* findMin();

	int help_countNodsLevel(int i, int n, int height);
	int countNodsLevel(int n);
};

//////////////////////////////////////////////////////////////////////////////////

struct SGlutContextStruct {
	Tree<int>* tree;
	int window_width, window_height, shift, k, R, x, y, state;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


template<class T>
void initWindow(int argc, char** argv);

template <class T>
void display(void);

static void reshape(int w, int h);

static void mouseMove(int x, int y);

int getPoss(int index, int width, int curLevel, int maxLevel);

template <class T>
static void mouseMove(int x, int y);

template <class T>
static void mouseClick(int x, int y);

///////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Tree.cpp"
