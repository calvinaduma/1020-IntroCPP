#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	double num1 = 132.364, num2 = 26.91;
	double quotient = num1 / num2;

	cout << endl << endl;
	// no precision set; default is 6
	cout << "no precision set; default is 6" << endl;
	cout << quotient << endl;
	cout << endl;

	cout << "setprecision(5)" << endl;
	cout << setprecision(5) << quotient << endl << endl;
	cout << "seeing that it is still 5" << endl << quotient << endl;
	cout << endl;

	cout << "setprecision(6) back to default" << endl;
	cout << setprecision(6) << quotient << endl;
	cout << endl << endl;

	return 0;
}
