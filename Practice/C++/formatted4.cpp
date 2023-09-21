#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	double num1 = 132.0; 
	double num2 = 133.0;

	cout << endl << endl << "num1 is: " << num1;
	cout << endl << endl;
	cout << "num2 is: " << num2 << endl;
	cout << "num1 with showpoint is: " << showpoint << num1;
	cout << endl << endl << "num2 is: " << num2;
	cout << endl << endl << "num1 without showpoint is: " << num1 << endl;
	cout << "notice showpoint is still set";
	cout << endl << endl;
	cout << "num1 with noshowpoint is: " << noshowpoint << num1;
	cout << endl << endl;

	
	return 0;
}
