// This program has variables of several of the integer types.
#include <iostream>
using namespace std;

int main() {
	int checking;
	unsigned int miles;
	long days;  		// same as:  long int
	long long years;	// same as:  long long int

	checking = -20;
	miles = 4276;
	days = 192000;
	years = 59LL;  	// Some compilers may optimize this since 59 is a small 
							// number so if your want to guarentee it is 8 bytes, 
							// the size of a long long you should use LL after 59

   // To make sure years is 8 bytes we can check it using the sizeof function 
	cout << endl;
	cout << "The size of years is: "<< sizeof(years) << " bytes" << endl;

	cout << "We have made a long journey of " << miles << " miles.";
	cout << "\nOur checking account balance is " << checking;
	cout << "\nAbout " << days << " days ago Columbus ";
	cout << "stood on this spot.\n";
	cout << endl;

	return 0;
}
