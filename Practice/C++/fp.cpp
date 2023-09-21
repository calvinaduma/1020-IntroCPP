#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float distance = 1.496E8;
	double mass = 1.989E30;
	cout << sizeof(distance) << endl;
	cout << sizeof(mass) << endl;

	cout << "The Sun is " << distance << " kilometers away.\n";
	cout << "The Sun\'s mass is " << mass << " kilograms.\n";

	return 0;
}
