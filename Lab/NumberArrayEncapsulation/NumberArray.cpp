/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 09
	F20
*/

#include "NumberArray.h"
#include <iomanip>
#include <iostream>

using namespace std;

// default constructor
NumberArray::NumberArray(){
	arraySize = 3;
	aPtr = new double [arraySize];
}
// parameterized constructor
NumberArray::NumberArray(int size, double value){
	arraySize = size;
	// pointer points to dynamically allocated array
	aPtr = new double [arraySize];
	// sets values for dynamic array
	for (int i=0; i<arraySize; i++){
		aPtr[i] = value;
	}
}
// copy constructor
NumberArray::NumberArray(const NumberArray &obj){
	// values from object getting copied to new object
	arraySize = obj.arraySize;
	aPtr = obj.aPtr;
}
// member function
void NumberArray::print() const{
	// prints members of array
	for (int i=0; i<arraySize; i++){
		cout << aPtr[i] << " ";
	}
	cout << endl;
}
// member function
void NumberArray::setValue(double value){
	// sets value of array to value
	for (int i=0; i<arraySize; i++){
		aPtr[i] = value;
	}
}
