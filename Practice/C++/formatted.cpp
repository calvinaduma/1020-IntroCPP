#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	int num1 = 2897,	num2 = 5,		num3 = 837,
		 num4 = 34,		num5 = 7,		num6 = 1623,
		 num7 = 390, 	num8 = 3546,	num9 = 12;

	cout << endl << "unformatted output:" << endl;
	cout << num1 << " " << num2 << " " << num3 << endl;
	cout << num4 << " " << num5 << " " << num6 << endl;
	cout << num7 << " " << num8 << " " << num9 << endl;

	cout << endl << "formatted output with setw(6), right justified:" << endl;
	cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
	cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
	cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;
	cout << endl;

	return 0;
}
