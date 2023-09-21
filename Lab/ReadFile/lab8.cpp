/*	Calvin Aduma | caduma
	Nushrat Humaira | CPSC 1020 | Fall 2020
	10/11/20
	Lab 08
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main (int argc, char* argv[]) {
	const int IDw = 4;
	const int PRICEw = 12;
	const int TIMEw = 33;
	const int TITLEw = 27;
	cout << right << "ID\t" << setw(IDw);
	cout << right << "Price" << setw(PRICEw);
	cout << right << "Time" << setw(TIMEw);
	cout << right << "Title" << setw(TITLEw) << endl;
	
	ifstream file (argv[1]);
	string inputString;
	if (file.is_open()){
		while (getline(file,inputString)){
			cout << right << inputString << endl;
		}
	}
	return 0;
}
