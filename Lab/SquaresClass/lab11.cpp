/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	F20
	11.18.20
*/

#include <iostream>
#include <string>

// Task 1:
#include <memory>

using namespace std;

class Squares{
	private:
		int length;
		
		// Task 2:
		unique_ptr<int[]> sq;
	public:
		Squares(int len){
			length=len;

			// Task 3:
			sq.reset (new int[length]);
			for (int k=0; k<length; k++){
				sq[k] = (k+1)*(k+1);
			}
// Trace
			cout << "Construct an object of size " << length << endl;
		}
// Print the sequence
		void print(){
			for (int k=0; k<length; k++)
				cout << sq[k] << " ";
			cout << endl;
		}
// Destructor deallocates storage
		~Squares(){
			// Task 4:
			sq.reset();
// Trace
			cout << "Destroy object of size " << length << endl;
		}
};
//********************************************************
// Outputs the sequence of squares in a			 *
// Squares object     					 *
//********************************************************

// Task 5:
void outputSquares(shared_ptr<Squares> sqPtr){
	cout << "The list of squares is: ";
	sqPtr->print();
}

int main(){
	// Task 6:
	shared_ptr<Squares> sqPtr(new Squares(3));
	outputSquares(sqPtr);

	// Task 7:
	shared_ptr<Squares> sqPtr2;
	sqPtr2 = sqPtr;
	outputSquares(sqPtr2);

	// Task 8:
	sqPtr.reset();
	return 0;
}	
