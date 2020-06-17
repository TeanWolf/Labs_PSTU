#pragma once
#include <glut.h>
#include <iostream>
#include<vector>

using namespace std;
template <class T>
class Tree {
private:
	T data;
	Tree* left;
	Tree* right;
	Tree* parent;
public:
	int node_x;
	int node_y;
	int text_x;
	int text_y;
	Tree(T);
	~Tree();
	void insertLeft(T);
	void insertRight(T);
	void insertNode(T dt);
	void setData(T dt) { data = dt; }
	T getData() { if (this != NULL) return data; else return NULL; }
	Tree<T>* getLeft() { return left; }
	Tree<T>* getRight() { return right; }
	Tree<T>* getParent() { return parent; }
	void addLeftTree(Tree<T>* tree) { left = tree; }
	void addRightTree(Tree<T>* tree) { right = tree; }
	Tree<T>* ejectLeft();
	Tree<T>* ejectRight();
	void deleteLeft();
	void deleteRight();
	void deleteNode();
	static void preOrder(Tree<T>*);
	static void inOrder(Tree<T>*);
	static void postOrder(Tree<T>*);
	Tree<T>* copyTree();
	void obh(Tree<T>* node);
	void printTree(int);
	void printVTree(int);
	void printVTree2();
	int getAmountOfNodes();
	int getHeight();
	void levelScan();
	void deleteTree() { delete this; }
	Tree<T>* replaceNULLforEmpty();
	void findElement_insertLeft(Tree<T>*, T, T);
	void findElement_insertRight(Tree<T>*, T, T);
	static Tree<T>* balancedTree(int n);
	void setCoordsForText(int k, int shift);
	void setCoordsForNode(int window_width, int window_height,
		int shift, int tree_width, int tree_height, int x, int y, int R);
	Tree* getNodeByCoords(int x, int y, int R);
	void drawTree(int argc, char** argv, int window_width, int window_height, int shift, int k);
	Tree<T>* ToSearchTree();
	static void toArr(Tree<T>* node, vector<T>& arr);
	Tree<T>* findElement(T);
	Tree<T>* next();
	Tree<T>* findMin();
	int help_countNodsLevel(int i, int n, int height);
	int countNodsLevel(int n);
};

struct SGlutContextStruct {
	Tree<int>* tree;
	int window_width, window_height, shift, k, R, x, y, state;
};

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

#include "Tree.cpp"