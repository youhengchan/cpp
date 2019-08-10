#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;

typedef unsigned int uint;
typedef int func_type_0(int, int);
typedef double func_type_1(int, int);

class MyTools {
	private:
		MyTools (); 
	public:			
		static MyTools* get_instance(void);		
		func_type_0 rand_int; 
		// Define a function rand_int with function type
		// func_type_0
		
		func_type_0(ave_int);
		// Define a function ave_int with function type
		// func_type_1
		
};

MyTools :: MyTools () {
	srand(time(uint(NULL))); 
} 


MyTools* MyTools :: get_instance(void) {
	static MyTools instance;
	return & instance;
}

int MyTools :: rand_int(int min, int max) {
	return ((double)rand()) / RAND_MAX * (max - min) + min;
}

int MyTools :: ave_int(int a, int b) {
	return (a + b) / 2;
}

typedef struct {
	
/*	func_type_1 f1[4];
*
*   Error:
*   	Declearation f1 as array of functions
*	Hint: 
*		We can not create function arrays so far
*
*/

/*
*	func_type_1 f;
*   Warning:
*		f will not work coz we can not define it outside an 
*       anonymous struct
*		
*/

	func_type_1* p_f;
			
} Func_hook, *p_hook;

double my_add(int a, int b) {
	return a + b;
} 

double my_sub(int a, int b) {
	return a - b;
}

double my_mul(int a, int b) {
	return a * b;
}

double my_div(int a, int b) {
	return  double(a) / double(b);
}

Func_hook* init_cal (void) {
	p_hook cal = new(Func_hook);
/*
*	cal.f = *my_sub;
*   Error:
*		Syntax error, C++ has no such thing as function variables so far
*
*/
	cal->p_f = my_add;
	return cal;
}

int main (void) {
	MyTools * sing_ins = MyTools :: get_instance();
	p_hook h = init_cal();
	int num1 = sing_ins->rand_int(0, 255);
	int num2 = sing_ins->rand_int(0, 255);
	cout << num1 << " + " << num2
		<< " = " << (*(h->p_f))(num1, num2)  << endl;
	h->p_f = my_div;
	cout << num1 << " / " << num2 
		<< " = " << (*(h->p_f))(num1, num2) << endl;   
	delete h;
	return 0;
}
