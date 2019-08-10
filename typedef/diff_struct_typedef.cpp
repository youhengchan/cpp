#include <iostream>

using namespace std;

typedef struct { 
	double x; 
	double y; } Point, * p_Point;

struct Circle {
	Point centre;
	double radius;
};

int main (int argc, char** argv) {

	Point p1;
	Circle c1;
	p1.x = p1.y = 0;
	Circle* p_c1 = &c1;
	p_c1->centre = p1;
	p_c1->radius = 10;
	cout << "C1 : (" << c1.centre.x << ", " << c1.centre.y << ", "
		 << c1.radius << ")" << endl; 	

	return 0;

}
