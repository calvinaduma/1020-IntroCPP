#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	double num1 = 132.364, num2 = 26.91;
	double quotient = num1 / num2;

	// no precision set, default is 6
	// setting precision of remaining to 4, 3, 2, and 1
	cout << endl << "no precision set, default is 6";
	cout << endl << quotient << endl << endl;
	cout << "precision set to 4, 3, 2, and 1" << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	cout << endl;

	cout << "setprecision(6), back to default" << endl;
	cout << setprecision(6) << quotient << endl << endl;

	cout << "setprecision(4) without fixed " << endl;
	cout << setprecision(4) << quotient << endl;
	cout << endl;
	
	cout << "setprecision(4) with fixed" << endl;
	cout << fixed << setprecision(4) << quotient << endl;
	cout << endl;

	cout << "setprecision(6), back to default";
	cout << " notice fixed is still set" << endl;
	cout << setprecision(6) << quotient << endl << endl;
	cout << endl << quotient << endl << endl;
	cout << endl;
	
	return 0;
}
