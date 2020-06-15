#include <glut.h>
#include "Tree.h"
const int SHIFT = 10;
const int WWIDTH = 1000;
const int WHEIGHT = 1000;
SGlutContextStruct glutContext;
static void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLsizei)w, 0, (GLsizei)h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutContext.window_width = w;
	glutContext.window_height = h;
	glutPostRedisplay();
}

template <class T>
static void mouseMove(int x, int y) {
	Tree<T>* tree = (Tree<T>*)glutContext.tree;
	int R = glutContext.R;
	Tree<T>* node = tree->getNodeByCoords(x, glutContext.window_height - y, R);
	if (node != NULL) {
		glutContext.x = x;
		glutContext.y = glutContext.window_height - y;
		glutContext.state = 1;
		glutPostRedisplay();
		cout << "!";
	}
	else {
		glutContext.state = 0;
		glutPostRedisplay();
	}

}

template <class T>
static void mouseClick(int btn, int stat, int x, int y) {
	Tree<T>* temp = glutContext.tree;
	if (stat == GLUT_DOWN) {
		int k;
		if (x > SHIFT && x < 200  && y > SHIFT  && y < 40) {
			cout << "��������: ";
			cin >> k;
			temp->insertNode(k);
		}
		if (x > SHIFT && x < 200 && y > SHIFT+50 && y < SHIFT + 90) {
			glutContext.tree->postOrder(temp);
		}
		if (x > SHIFT && x < 200 && y > SHIFT + 100 && y < SHIFT + 140) {
			int n;
			cout << "����� ������:";
			cin >> n;
			if (n <= temp->getHeight() - 1) {
				cout << "���������� �����" << n << ":" << glutContext.tree->countNodsLevel(n) << "\n";
			}
			else {
				cout << "��� ������ ������\n";
			}
			
		}
	}
	glutPostRedisplay();
}

template<class T>
void initWindow(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(glutContext.window_width, glutContext.window_height);

	glutSetWindow(glutCreateWindow("------------------------------"));
	glutDisplayFunc(display<T>);
	glutReshapeFunc(reshape);
	glutPassiveMotionFunc(mouseMove<T>);
	glutMouseFunc(mouseClick<T>);
	glutMainLoop();
}


template <class T>
void display(void) {
	
	Tree<T>* tree = glutContext.tree->copyTree();
	tree = tree->replaceNULLforEmpty();
	int k = glutContext.k;
	int window_width = glutContext.window_width;
	int window_height = glutContext.window_height;
	int shift = glutContext.shift;
	int height = tree->getHeight();
	int maxLeafs = pow(2, height - 1); 
	int width = 2 * maxLeafs - 1; 
	int curLevel = 0;
	int index = 0;
	int factSpaces = getPoss(index, width, curLevel, height - 1);
	pos node;
	vector<Tree<T>*> V;
	vector<pos> Vi;
	int R;
	R = (window_width - 2 * shift) / ( width + 1);
	if (2 * R * height > (window_height - 2 * shift)) {
		R = (window_height - 2 * shift) / ( 2 * height );
	}
	glutContext.R = R;
	tree->setCoordsForNode(window_width, window_height, shift, width, height, factSpaces, curLevel, R); 
	node.col = factSpaces;
	node.str = curLevel;
	Vi.push_back(node);
	glClearColor(0.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
	glEnable(GL_POINT_SMOOTH);
	for (int i = 0; i < tree->getAmountOfNodes(); i++) {
		if (pow(2, curLevel) <= index + 1) {
			index = 0;
			curLevel++;
		}
		if (V.at(i)->getLeft() != NULL) {
			V.push_back(V.at(i)->getLeft());
			factSpaces = getPoss(index, width, curLevel, height - 1);
			node.col = factSpaces;
			node.str = curLevel;
			Vi.push_back(node);
			index++;
			V.at(i)->getLeft()->setCoordsForNode(window_width, window_height, shift, width, height, factSpaces, curLevel, R);
			if (V.at(i)->getLeft()->getData() != NULL) {
				int x1 = V.at(i)->node_x;
				int y1 = V.at(i)->node_y;
				int x2 = V.at(i)->getLeft()->node_x;
				int y2 = V.at(i)->getLeft()->node_y;
				drawLine(x1, y1, x2, y2);
			}
		}
		if (V.at(i)->getRight() != NULL) {
			V.push_back(V.at(i)->getRight());
			factSpaces = getPoss(index, width, curLevel, height - 1);
			node.col = factSpaces;
			node.str = curLevel;
			Vi.push_back(node);
			index++;
			V.at(i)->getRight()->setCoordsForNode(window_width, window_height, shift, width, height, factSpaces, curLevel, R);
			if (V.at(i)->getRight()->getData() != NULL) {
				int x1 = V.at(i)->node_x;
				int y1 = V.at(i)->node_y;
				int x2 = V.at(i)->getRight()->node_x;
				int y2 = V.at(i)->getRight()->node_y;
				drawLine(x1, y1, x2, y2);
			}
		}
		if (V.at(i)->getData() != NULL) {
			if (glutContext.state == 0) {
				drawFillCircle(V.at(i)->node_x, V.at(i)->node_y, R);
			}
			else {
				glClear(GL_COLOR_BUFFER_BIT);
				drawFillCircle(V.at(i)->node_x, V.at(i)->node_y, R);
				if ((tree->getNodeByCoords(glutContext.x, glutContext.y, R)->node_x == V.at(i)->node_x)
					& (tree->getNodeByCoords(glutContext.x, glutContext.y, R)->node_y == V.at(i)->node_y))
					drawBlueCircle(V.at(i)->node_x, V.at(i)->node_y, R);
			}
			V.at(i)->setCoordsForText(k, R);
			drawText(V.at(i)->getData(), GLUT_STROKE_ROMAN, V.at(i)->text_x, V.at(i)->text_y, R, k);
		}
	}
	drawButtons();
	glutSwapBuffers();
	glDisable(GL_POINT_SMOOTH);
	
}
int getPoss(int index, int width, int curLevel, int maxLevel) {
    int x1 = 0;
    int x2 = pow(2, curLevel) - 1;
    int y1 = width / pow(2, curLevel + 1);
    int y2 = width - pow(2, maxLevel - curLevel);
    if (x1 == x2) return y1;
    double k = (y2 - y1) / (x2 - x1);
    double m = -x1 * k + y1;
    int y = (int)(k * index + m);
    return y;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "RUS");
	Tree<int>* tree = NULL;
	int n;
	cout << "���������� ���������:";
	cin >> n;
	tree = tree->balancedTree(n);
	tree->printVTree(1);
	Tree<int>* tree1 = tree->ToSearchTree();
	tree1->drawTree(argc, argv, WWIDTH, WHEIGHT, SHIFT, 1);
    return 0;
}



