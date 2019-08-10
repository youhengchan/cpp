#include <iostream>
#define print cout << 

using namespace std;

void func_a () {
	
	typedef struct {
		long property_1;
		long property_2;
		int property_3;
	} llt, *p_llt;
	
	llt l1;
	p_llt(p_l1) = &l1; 
	p_l1->property_1 = p_l1->property_2 = p_l1->property_3 = 10;
	print p_l1->property_1 << p_l1->property_2 
			<< p_l1->property_3 << endl;

}

void func_b () {

	typedef struct { 
		double length; 
		double width; } Rec, * p_Rec;
	Rec r1;
	p_Rec p_r1 = &r1;
	p_r1->length = p_r1->width = 11;
	print r1.length << " " << r1.width << endl;

}

void func_c() {
	
	typedef long long int llt;
	llt num = 1e15;
	print num << endl;		

}

int main (int argc, char** argv) {
	
	func_a();
	func_b();
	func_c();

	return 0;

}
