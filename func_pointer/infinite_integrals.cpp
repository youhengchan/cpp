#include <iostream>
#include <sstream>
using namespace std;


double f(double x) {
	return x*x - 2*x - 3;
}


double definite_integrals(double (*p_func) (double), double delta, double low, double high) {
	double count = low, result = 0.0;
	while (count <= high) {
		result += delta * p_func(count);
		// Could also be written as:
		// result += delta * (*p_func)(count);
		count += delta;
	}
	return result;
}

void prompt(char* str) {
	cout << endl << "******************************************" 
		<< endl << endl;
	cout << "This program can calculate the definite "
		 << endl << " integral of f(x) = x*x - 2*x - 3" << endl; 
	cout << "Usage : " << str << " delta low high" 
		<< endl << endl;
	cout << "******************************************" << endl << endl;
}

int main(int argc, char** argv) {
	prompt(argv[0]);
	if (argc < 4) {
		cerr << "Syntax Error" << endl << endl;
		return -1;
	}
	stringstream ss;
	double delta = 0.0, low = 0.0, high = 0.0;
	ss << argv[1];
	ss >> delta;
	ss.clear();
	ss << argv[2];
	ss >> low;
	ss.clear();
	ss << argv[3];
	ss >> high;
	ss.clear();
	cout << definite_integrals(f, delta, low, high) << endl << endl;
	return 0;
}
