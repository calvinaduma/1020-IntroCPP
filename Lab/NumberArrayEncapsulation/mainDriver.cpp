/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 09
	F20
*/

#include <iostream>
#include <iomanip>
#include "NumberArray.h" 
using namespace std;

int main() {
  	// Create an object
  	NumberArray first;
  	NumberArray second(3, 10.5);
  
  	// Make a copy of the object
  	NumberArray third = second;
  
  	// Display the values of the two objects
  	cout << endl << setprecision(2) << fixed << showpoint;
  	cout << "Value stored in first object is ";
  	first.print();

  	cout << endl << setprecision(2) << fixed << showpoint;
  	cout << "Value stored in second object is ";
  	second.print();

  	cout << endl << "Value stored in third object is "; 
  	third.print();
  	cout << endl << endl;
	cout << "Changing value in third object " << endl;
		 
  	// Now change the  value stored in the third object
  	third.setValue(20.5);
  
  	// Display the values stored in the two objects
  	cout << endl << "Value stored in second object is ";
  	second.print();
  	cout << endl << "Value stored in third object is ";
  	third.print();
	
	cout << endl << endl;
  	return 0;
}
