#include <iostream>
#include <string>
using namespace std;

int main() {
	auto test = 10;
	test = 2.5;
	auto test2 = "Hello World";
	cout << test << endl << test2 << endl;

	int arr[5] = {0, 1, 2, 3, 4};
	/* The different parts of the for each range based loop are as follows:
	*  datatype = auto - this is determined by the data type for the array in
	*     this case x is an int since arr is an int array.
	*  rangeVarable = x - is the rangeVariable.  With each iteration of the
	*     loop an element of the array will be copied to x - beginning with
	*     subscript 0.
	*  array = arr - is the name of the array on which the loop will traverse
	*     through.
	*  statement = the statement/statements executed during each loop iteration.
	*/
	for(auto x: arr) {
		if(x != 4)
			cout << x << ", ";
			else
				cout << x;
	}
	cout << endl;

	cout << endl << endl << "arr[0] is " << arr[0] << endl;
	return 0;
}
