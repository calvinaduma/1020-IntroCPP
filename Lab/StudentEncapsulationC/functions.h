/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 04
	September 14, 2020
*/

#ifndef FUNCTIONS
#define FUNCTIONS

struct Student
{
    char* firstName;
    int age, cuid;
    float GPA;
};

void addStudents(struct Student* s, int *numStudents);
void printStudents(struct Student* s, int *numStudents);
void changeGPA(struct Student* s);
void bubbleSort(struct Student* s,int *numStudents);
int printMenu();

#endif
