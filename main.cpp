#include <iostream>
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
using namespace std;

int main() {
	Rectangle t(1, 2, 3);
	Triangle t1(1, 2, 3);
	EquilateralTriangle t2(1, 2, 3);
	cout << t.PrintData() << endl;
	cout << t1.PrintData() << endl;
	cout << t2.PrintData() << endl;


	system("pause");
	return 0;
}
