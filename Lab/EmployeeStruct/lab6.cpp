/* 	Calvin Aduma | caduma
	Section 001 | Nushrat Humaira
	Lab 06 | F20
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <string>
#include <stdlib.h>

/*	This function creates a list of 10 employees, randomly shuffles the array of employees
	then sorts the employees. The max employee count is 10 employees. The width for the 
	printed employee data is 7. The printed data is also right justified and the precision
	is set to 2 places after the decimal point.
*/

using namespace std;


typedef struct Employee{
	string lastName;
	string firstName;
	int birthYear;
	double hourlyWage;
}employee;

bool name_order(const employee& lhs, const employee& rhs);
int myrandom (int i) { return rand()%i;}


int main(int argc, char const *argv[]) {
  // IMPLEMENT as instructed below
  /*This is to seed the random generator */
  srand(unsigned (time(0)));
  /*Create an array of 10 employees and fill information from standard input with prompt messages*/
	Employee employee[10];	// array of 10 Employee structs are created and stored in employee
	for (int i=0; i<10; i++){
		cout << endl << "Enter employee first and last name:\t";
		cin >> employee[i].firstName >> employee[i].lastName;
		cout << endl << "Enter " << employee[i].firstName << " ";
		cout << employee[i].lastName <<"'s birth year:\t";
		cin >> employee[i].birthYear;
		cout << endl << "What is " << employee[i].firstName << " ";
		cout << employee[i].lastName <<"'s houry wage:\t";
		cin >> employee[i].hourlyWage;
		cout << endl;
	}
  /*After the array is created and initialzed we call random_shuffle() see the
   *notes to determine the parameters to pass in.*/
	Employee *employeePtr2 = &employee[10]; // pointer to end + 1 of array index
	Employee *employeePtr1 = &employee[0]; // pointer to beginning of array index
	random_shuffle(employeePtr1, employeePtr2, myrandom);

   /*Build a smaller array of 5 employees from the first five cards of the array created
    *above*/
	Employee employeeArray[5] = {employee[0], employee[1], employee[2], employee[3], employee[4]};
	// array created from the first 5 entrants in the shuffled array
    /*Sort the new array.  Links to how to call this function is in the specs
     *provided*/
	sort(employeePtr1, employeePtr2, name_order); // shuffled array sorted by name

    /*Now print the array below */
	for (auto x:employeeArray){
		cout << setw(7) << right << x.lastName << ",  " << x.firstName << endl;
		cout << setw(7) << right << x.birthYear << endl;
		cout << setw(7) << right << fixed << showpoint << setprecision(2);
		cout << x.hourlyWage << endl;
	}

  return 0;
}


/*This function will be passed to the sort funtion. Hints on how to implement
* this is in the specifications document.*/
/*bool suit_order(const employee& lhs, const employee& rhs) {
  // IMPLEMENT
}*/
// ^ this was not in the instructions so i do not know what this is for
bool name_order(const employee& lhs, const employee& rhs) {
	return lhs.lastName < rhs.lastName; // sorts by lastName. If the left last name is less, 
					    // it returns true
}
