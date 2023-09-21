/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 09
	F20
*/

#include <iostream>

using namespace std; 

class NumberArray {
	private:
  		double *aPtr;
  		int arraySize;
	public:
  		NumberArray();
  		NumberArray(int size, double value);
		NumberArray(const NumberArray &obj); 
  		~NumberArray(){ if (arraySize > 0) delete [ ] aPtr;}
  		void print() const;
  		void setValue(double value);
};
