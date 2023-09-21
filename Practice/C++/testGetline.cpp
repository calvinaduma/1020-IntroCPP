#include <iostream>
#include <string>
using namespace std;

int main(void ) {
	string name;
	cout << "What is your full name?" << endl;
	getline(cin, name);

	cout << "Hello " << name << ".\n"; 

	return 0;
}
