#include <iostream>
using namespace std;

int main(void ) {
	string name;
	cout << "What is your full name?" << endl;
	cin >> name;

	cout << "Hello " << name << ".\n"; 
	cout << "size of name is: " << name.size() << endl;
	cout << "length of name is: " << name.length() << endl;


	return 0;
}
