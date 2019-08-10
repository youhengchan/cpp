#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
   	
	typedef unsigned char uchar;
	uchar ch = 'a';
	cout << ch << endl;	

	typedef string S;
	S str = "Hello, world";
	cout << str << endl;

	return 0;
}

