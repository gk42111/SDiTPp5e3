#include <iostream>
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
using namespace std;

int main() {
	Rectangle t(1, 2, 3);
	Triangle t1(1,2, 3);
	EquilateralTriangle t2(1, 2, 3);
	t.PrintData();
	t1.PrintData();
	t2.PrintData();


	system("pause");
	return 0;
}