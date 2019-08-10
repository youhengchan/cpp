#include <iostream>

using namespace std;

struct Type_1 {

	int data;

	Type_1 () { 
		this->data = 100;
		cout << "Constructor of Type_1" << endl; 
	}

	void func1() { 
		cout << "data = " << this->data 
			<<" func1 in Type_1 calling" << endl;	
	}

};

typedef struct {
	
	int data = 200;
/*	
*	Type_2 () {
*		this->data = 200;
*		cout << "Constructor of Type_2" << endl;
*	}		
*
* Error: This struct has no type, actually, it is an anonymous struct 
*/
	
	void func2() {
		cout << "data = " << this->data << 
		" func2 in Type_2 calling" << endl;
	}

} Type_2;

int main (void) {

	Type_1 t1;
	t1.func1();	

	Type_2 t2;
	t2.func2();
	return 0;
}
