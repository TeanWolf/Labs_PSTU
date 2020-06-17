#include "Tree.h"
#include <string>
#ifndef TREE_H

#define TREE_H

template<class T>
Tree<T>::Tree(T dt) {
	data = dt;
	left = NULL;
	right = NULL;
	parent = NULL;
}
template<class T>
Tree<T>::~Tree() {
	delete this->left;
	delete this->right;
}

extern SGlutContextStruct glutContext;
template<class T>
void Tree<T>::preOrder(Tree<T>* node) {
	if (node != NULL) {
		cout << node->getData() << ' ';
		preOrder(node->left);
		preOrder(node->right);
	}
}
template<class T>
void Tree<T>::inOrder(Tree<T>* node) {
	if (node != NULL) {
		inOrder(node->left);
		cout << node->getData() << ' ';
		inOrder(node->right);
	}
}
template<class T>
void Tree<T>::postOrder(Tree<T>* node) {
	if (node != NULL) {
		postOrder(node->left);
		postOrder(node->right);
		if (node->getData() % 2 == 0) {
			node->deleteNode();
		}
	}
}


template<class T>
Tree<T>* Tree<T>::ejectLeft() {
	if (this->left != NULL) {
		Tree<T>* temp = this->left;
		this->left = NULL;
		return temp;
	}
	return NULL;
}

template<class T>
void Tree<T>::deleteLeft() {
	Tree<T>* temp = this->ejectLeft();
	delete temp;
}

template<class T>
Tree<T>* Tree<T>::ejectRight() {
	if (this->right != NULL) {
		Tree<T>* temp = this->right;
		this->right = NULL;
		return temp;
	}
	return NULL;
}

template<class T>
void Tree<T>::deleteRight() {
	Tree<T>* temp = this->ejectRight();
	delete temp;
}

template<class T>
void Tree<T>::printTree(int level) {
	if (this != NULL) {
		this->left->printTree(level + 1);
		for (int i = 1; i < level; i++) cout << " ";
		cout << this->getData() << endl;
		this->right->printTree(level + 1);
	}
}

template<class T>
Tree<T>* Tree<T>::copyTree() {
	Tree<T>* tree = new Tree<T>(this->data);
	if (this->parent != NULL)
		tree->parent = this->parent;
	if (this->left != NULL)
		tree->left = this->left->copyTree();
	if (this->right != NULL)
		tree->right = this->right->copyTree();
	return tree;
}

template <class T>
void Tree<T>::insertLeft(T dt) {
	Tree<T>* node = new Tree(dt);
	if (this->left != NULL)
		this->left->parent = node;
	node->left = this->left;
	this->left = node;
	node->parent = this;
}

template<class T>
void Tree<T>::insertRight(T dt) {
	Tree<T>* node = new Tree(dt);
	if (this->right != NULL)
		this->right->parent = node;
	node->right = this->right;
	this->right = node;
	node->parent = this;
}

template <class T>
Tree<T>* Tree<T>::balancedTree(int n) {
	if (n == 0) return NULL;
	cout << "Значение:";
	T dt;
	cin >> dt;
	Tree<T>* tree = new Tree<T>(dt);
	tree->addLeftTree(balancedTree(n / 2));
	tree->addRightTree(balancedTree(n - n / 2 - 1));
	return tree;
}

template <class T>
void Tree<T>::findElement_insertLeft(Tree<T>* node, T dt1, T dt2) {
	if (node != NULL) {
		findElement_insertLeft(node->getLeft(), dt1, dt2);
		if (dt1 == node->getData()) node->insertLeft(dt2);
		findElement_insertLeft(node->getRight(), dt1, dt2);
	}
}

template <class T>
void Tree<T>::findElement_insertRight(Tree<T>* node, T dt1, T dt2) {
	if (node != NULL) {
		findElement_insertRight(node->getLeft(), dt1, dt2);
		if (dt1 == node->getData()) node->insertRight(dt2);
		findElement_insertRight(node->getRight(), dt1, dt2);
	}
}

template<class T>
void Tree<T>::levelScan() {
	vector<Tree<T>*> V;
	Tree<T>* p = this;
	V.push_back(p);
	for (int i = 0; i < this->getAmountOfNodes(); i++) {
		if (V.at(i)->left != NULL)
			V.push_back(V.at(i)->left);
		if (V.at(i)->right != NULL)
			V.push_back(V.at(i)->right);
	}
	for (int i = 0; i < V.size(); i++) cout << V.at(i)->getData() << " ";
	cout << endl;
}

template <class T>
int Tree<T>::getHeight() {
	int h1 = 0, h2 = 0, hadd = 0;
	if (this == NULL)return 0;
	if (this->left != NULL) h1 = this->left->getHeight();
	if (this->right != NULL) h2 = this->right->getHeight();
	if (h1 >= h2) return h1 + 1;
	else return h2 + 1;
}

template<class T>
int Tree<T>::getAmountOfNodes() {
	if (this == NULL)return 0;
	if ((this->left == NULL) && (this->right == NULL)) return 1;
	int l = 0;
	int r = 0;
	if (this->left != NULL) l = this->left->getAmountOfNodes();
	if (this->right != NULL) r = this->right->getAmountOfNodes();
	return (l + r + 1);
}


template <class T>
Tree<T>* Tree<T>::replaceNULLforEmpty() {
	Tree<T>* node = this->copyTree();
	int h = node->getHeight();
	node = replace_help(node, h);
	return node;
}

template <class T>
Tree<T>* replace_help(Tree<T>* node, int h) {
	int curLevel = getLevel(node);
	if ((node->getLeft() == NULL) && (curLevel != h - 1)) {
		node->insertLeft(NULL);
	}
	if ((node->getRight() == NULL) && (curLevel != h - 1)) {
		node->insertRight(NULL);
	}
	if (node->getLeft() != NULL) node->addLeftTree(replace_help(node->getLeft(), h));
	if (node->getRight() != NULL) node->addRightTree(replace_help(node->getRight(), h));
	return node;
}

template <class T>
void Tree<T>::insertNode(T dt) {
	Tree<T>* tree = this;
	while (tree != NULL) {
		if (dt >= tree->data) {
			if (tree->right != NULL) {
				tree = tree->right;
			}
			else {
				Tree<T>* t = new Tree<T>(dt);
				t->parent = tree;
				tree->right = t;
				break;
			}
		}
		else if (dt < tree->data) {
			if (tree->left != NULL) {
				tree = tree->left;
			}
			else {
				Tree<T>* t = new Tree<T>(dt);
				t->parent = tree;
				tree->left = t;
				break;
			}
		}
	}
}

template<class T>
void Tree<T>::deleteNode() {
	Tree<T>* e = this;
	Tree<T>* p = e->parent;

	if ((e->left == NULL) && (e->right == NULL)) {
		if (p->left == e) p->left = NULL;
		if (p->right == e) p->right = NULL;
	}
	else if ((e->left == NULL) || (e->right == NULL)) {
		if (e->left == NULL) {
			if (p->left == e) p->left = e->right;
			else p->right = e->right;
			e->right->parent = p;
		}
		else {
			if (p->left == e) p->left = e->left;
			else p->right = e->left;
			e->left->parent = p;
		}
	}
	else {
		Tree<T>* s = e->next();
		e->data = s->data;
		if (s->parent->left == s) {
			s->parent->left = s->right;
			if (s->right != NULL)
				s->right->parent = s->parent;
		}
		else {
			s->parent->right = s->right;
			if (s->right != NULL)
				s->right->parent = s->parent;
		}
	}

}

template <class T>
Tree<T>* Tree<T>::findElement(T dt) {
	if ((this == NULL) || (dt == this->data))
		return this;
	if (dt < this->data) return this->left->findElement(dt);
	else return this->right->findElement(dt);
}

template <class T>
Tree<T>* Tree<T>::next() {
	Tree<T>* tree = this;
	if (tree->right != NULL)
		return tree->right->findMin();
	Tree<T>* t = tree->parent;
	while ((t != NULL) && (tree == t->right)) {
		tree = t;
		t = t->parent;
	}
	return t;
}

template <class T>
Tree<T>* Tree<T>::findMin() {
	if (this->left == NULL) return this;
	return this->left->findMin();
}

template<class T>
void Tree<T>::toArr(Tree<T>* node, vector<T>& arr) {

	if (node != NULL) {
		arr.push_back(node->getData());
		toArr(node->left, arr);
		toArr(node->right, arr);
	}
}

template <class T>
Tree<T>* Tree<T>::ToSearchTree() {
	vector<T> v(1);
	this->toArr(this, v);
	Tree<T>* searchTree = new Tree(v[1]);
	for (int i = 2; i < v.size(); i++) {
		searchTree->insertNode(v[i]);
	}
	return searchTree;
}

template <class T>
int Tree<T>::help_countNodsLevel(int i, int n, int height) {
	int count = 0;
	if (i == n) {
		return 1;
	}
	else if (i < n) {
		if (this->left != NULL)
			count += this->left->help_countNodsLevel(i + 1, n, height);
		if (this->right != NULL)
			count += this->right->help_countNodsLevel(i + 1, n, height);
		return count;
	}
}

template <class T>
int Tree<T>::countNodsLevel(int n) {
	return help_countNodsLevel(0, n, getHeight() - 1);
}

template<class T>
int getLevel(Tree<T>* tree) {

	if (tree->getParent() == NULL) {
		return 0;
	}
	else {
		return getLevel(tree->getParent()) + 1;
	}


}



struct pos {
	int col;
	int str;
};

template <class T>
void Tree<T>::printVTree(int k) {
	int height = this->getHeight();
	int maxLeafs = pow(2, height - 1);
	int width = 2 * maxLeafs - 1;
	int curLevel = 0;
	int index = 0;
	int factSpaces = getPoss(index, width, curLevel, height - 1);
	pos node;
	vector<Tree<T>*> V;
	vector<pos> Vi;
	Tree<T>* t = this->copyTree();
	t = t->replaceNULLforEmpty();
	Tree<T>* p = t;
	V.push_back(p);
	node.col = factSpaces;
	node.str = curLevel;
	Vi.push_back(node);
	for (int i = 0; i < t->getAmountOfNodes(); i++) {
		if (pow(2, curLevel) <= index + 1) {
			index = 0;
			curLevel++;
		}
		if (V.at(i)->left != NULL) {
			V.push_back(V.at(i)->left);
			factSpaces = getPoss(index, width, curLevel, height - 1);
			node.col = factSpaces;
			node.str = curLevel;
			Vi.push_back(node);
			index++;
		}
		if (V.at(i)->right != NULL) {
			V.push_back(V.at(i)->right);
			factSpaces = getPoss(index, width, curLevel, height - 1);
			node.col = factSpaces;
			node.str = curLevel;
			Vi.push_back(node);
			index++;
		}
	}
	for (int i = V.size() - 1; i >= 0; i--) {
		if (i != 0) {
			if (Vi.at(i - 1).str == Vi.at(i).str) Vi.at(i).col = Vi.at(i).col - Vi.at(i - 1).col - 1;
		}
	}
	int flag = 0;
	for (int i = 0; i < V.size(); i++) {
		node = Vi.at(i);
		curLevel = node.str;
		if (flag < curLevel) {
			flag = curLevel;
			cout << endl;
		}
		factSpaces = node.col;
		int realSpaces = k * factSpaces;
		for (int j = 0; j < realSpaces; j++) cout << " ";
		if (V.at(i)->getData() != NULL) cout << V.at(i)->getData();
		else for (int j = 0; j < k; j++) cout << " ";
	}
	cout << endl;
}
template<class T>
void Tree<T>::drawTree(int argc, char** argv, int window_width, int window_height, int shift, int k) {
	glutContext.tree = this;
	glutContext.window_width = window_width;
	glutContext.window_height = window_height;
	glutContext.shift = shift;
	glutContext.k = k;
	initWindow<T>(argc, argv);
}

static void drawLine(int x1, int y1, int x2, int y2)
{
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
}

static void drawButtons() {
	int shift = glutContext.shift;
	int height = glutContext.window_height;
	glColor3d(0.3, 1.0, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 40);
	glVertex2i(shift + 200, height - shift - 40);
	glVertex2i(shift + 200, height - shift);
	glVertex2i(shift, height - shift);
	glEnd();

	glColor3d(1.0, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 90);
	glVertex2i(shift + 200, height - shift - 90);
	glVertex2i(shift + 200, height - shift - 50);
	glVertex2i(shift, height - shift - 50);
	glEnd();

	glColor3d(0.3, 0.3, 0.9);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 140);
	glVertex2i(shift + 200, height - shift - 140);
	glVertex2i(shift + 200, height - shift - 100);
	glVertex2i(shift, height - shift - 100);
	glEnd();
}

static void drawFillCircle(int x, int y, int R)
{
	glColor3f(2.5, 0.9, 0.5);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int t = 0; t <= 360; t++) {
		x1 = R * sin(t) + x;
		y1 = R * cos(t) + y;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(2.0, 1.0, 1.0);
	glBegin(GL_POINTS);
	for (int i = R - 1; i <= R; i++) {
		for (int t = 0; t <= 360; t++) {
			x1 = R * sin(t) + x;
			y1 = R * cos(t) + y;
			glVertex2f(x1, y1);
		}
	}
	glEnd();
}

static void drawBlueCircle(int x, int y, int R) {
	glColor3f(0.0, 0.0, 1.0);
	float x1, y1;
	glBegin(GL_POINTS);
	for (int i = R - 1; i <= R; i++) {
		for (int t = 0; t <= 360; t++) {
			x1 = R * sin(t) + x;
			y1 = R * cos(t) + y;
			glVertex2f(x1, y1);
		}
	}
	glEnd();
}

template<class T>
static void drawText(T text, void* font, int text_x, int text_y, int R, int k)
{
	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(text_x, text_y, 0.0);
	string s = to_string(text);
	char* s1 = new char[s.size() + 1];
	for (int i = 0; i < s.size(); i++) {
		s1[i] = s.at(i);
	}
	s1[s.size()] = 0;
	char* c;
	int max_char_width = 0;
	int char_width = 0;
	for (c = s1; *c != '\0'; c++) {
		char_width = glutStrokeWidth(font, *c);
		if (max_char_width < char_width) max_char_width = char_width;
	}
	float expand_x = (float)1.5 * R / (float)(k * max_char_width);
	float expand_y = (float)1.5 * R / (float)(k * 100);
	glScalef(expand_x, expand_y, 1.0);
	for (c = s1; *c != '\0'; c++)
		glutStrokeCharacter(font, *c);
	glPopMatrix();
}
template <class T>
void Tree<T>::setCoordsForNode(int window_width, int window_height,
	int shift, int tree_width, int tree_height, int x, int y, int R)
{

	if (tree_width != tree_height)
	{
		int k_x = (window_width - 2 * (shift + R)) / (tree_width - 1);
		int k_y = (window_height - 2 * (shift + R)) / (tree_height - 1);
		node_x = node_x = k_x * x + shift + R;
		node_y = window_height - k_y * y - shift - R;
	}
	else
	{
		node_x = window_width / 2;
		node_y = window_height / 2;
	}
}

template<class T>
void Tree<T>::setCoordsForText(int k, int R)
{
	text_x = node_x - 3 * R / 4;
	text_y = node_y - 3 * R / (4 * k);
}

template<class T>
Tree<T>* Tree<T>::getNodeByCoords(int x, int y, int R)
{
	Tree<T>* node = this;
	node = get_help(node, x, y, R);
	return node;
}

template<class T>
Tree<T>* get_help(Tree<T>* node, int x, int y, int R)
{
	if (pow(x - node->node_x, 2) + pow(y - node->node_y, 2) <= pow(R, 2))
		return node;
	Tree<T>* temp = NULL;
	if (node->getLeft() != NULL)
		temp = get_help(node->getLeft(), x, y, R);
	if (temp != NULL)
		return temp;
	if (node->getRight() != NULL)
		temp = get_help(node->getRight(), x, y, R);
	return temp;
}
#endif