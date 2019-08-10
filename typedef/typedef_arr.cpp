#include <iostream>
using namespace std;

int main (int argc, char** argv) {
	typedef int int_10[10];
	int_10 new_arr;
	for (auto & ele : new_arr) {
		ele = 1;
	}
	for (auto & ele : new_arr) {
		cout << ele << " ";	
	}
	cout << endl;

	// Auto len detection
	typedef int auto_int[];
	auto_int arr1 = {1, 2, 3};
	auto_int arr2 = {1, 2};
	for (auto ele : arr1) {
		cout << ele << " ";
	}
	cout << endl;

	for (auto ele : arr2) {
		cout << ele << " ";
	}
	cout << endl;	

	return 0;

}
