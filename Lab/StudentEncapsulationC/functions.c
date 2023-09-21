/* 	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 04
	September 14, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "functions.h"

// function file

// adds student's data (name, age, cuid, gpa) to their own unique array.
// Inputs: Struct pointer to array of structs. Pointer to integer that keeps
// count of number of students add
void addStudents(struct Student* s, int *numStudents){
  char *pseudoName = (char*)malloc(sizeof(char)*25);
	int studentAge, studentID;
  float studentGPA=0;
	printf("\nWhat is the name of the student you'd like to add?\t");
	scanf("%s", pseudoName);
  s[*numStudents].firstName = pseudoName; // name input is stored into struct's firstName element
  // checks to make sure name input is <= 25 characters
	while (strlen(pseudoName)>25){
		printf("\n\n");
		fprintf(stderr, "\nThe name can only be 25 characters long!\n");
		printf("What is the name of the student you'd like to add?\t   ");
		scanf("%s", pseudoName);
	}
	printf("\n\n");
	printf("\nHow old is %s?   ", s[*numStudents].firstName);
	scanf("%d", &studentAge);
	s[*numStudents].age = studentAge; // stores age in the *numStudentsth element
	printf("\n\n");

	printf("\nWhat is %s's CUID number?   ", s[*numStudents].firstName);
	scanf("%d", &studentID);
	s[*numStudents].cuid = studentID; // stores cuid in the *numStudentsth element
	printf("\n\n");

	printf("\nWhat is %s's GPA?   ", s[*numStudents].firstName);
	scanf(" %f", &studentGPA);
	s[*numStudents].GPA = studentGPA; // stores GPA in the *numStudentsth element
	printf("\n\n");
	*numStudents = *numStudents + 1; // increments counter to showcase number of students entered
}

// prints all of the students the have been inputted.
void printStudents(struct Student* s, int *numStudents){
	int i=0;
	for (i=0; i<*numStudents; i++){ // numStudents used as ceiling for counter
		printf("\nStudent #%d\n", i+1);
		printf("\tStudent's Name: %s\n", s[i].firstName);
		printf("\tAge: %d\n", s[i].age);
		printf("\tCUID: %d\n", s[i].cuid);
		printf("\tGPA: %.2f\n\n", s[i].GPA);
	}
}

// changes the GPA of a student specified by their CUID. Checks CUID is correct or not.
void changeGPA(struct Student* s){
	int studentID, i, size, choice, correct;
  	float newGPA=0;
	correct = 1; // boolean expression for while loop
	size = sizeof(s); // stores number of structs created for loop counter later in code
	printf("\n\nWhat is the student's CUID?\t");
 	// loop for incorrect input of CUID
	while (correct){
		scanf("%d", &studentID);
 		// loops through stores CUID's to find correct cuid
		for(i=0; i<size; i++){
			if (i == size && s[i].cuid != studentID){ // if no CUID was found
				printf("\nCUID: %d was not found!\n\n", studentID);
				correct = 0; // loop ends
				break;
			}
			if (s[i].cuid == studentID){ // if CUID is found
				printf("\nCONFIRM: %s?\nEnter (0 for NO. 1 for YES):\t", s[i].firstName);
				scanf("%d", &choice);
      				// switch statement for decision of what to do with confirm option
				switch (choice){
					case 1:
						printf("\n\nEnter new GPA:\t");
						scanf("%f", &newGPA);
						s[i].GPA = newGPA;
						correct = 0;
						break;
					case 0:
         				 // loop repeats if wrong CUID os entered
						printf("\n\nEnter correct CUID:\t");
						break;
				}
				break;
			}
		}
	}
}

// bubble sort into descending (first to last) order so that the higher GPAs can be showcased first.
void bubbleSort(struct Student* s,int *numStudents){
	int i, j;
  	struct Student temp; // temp struct created to transfer enitre struct
  // loop to sift through array of structs
	for(i=0; i<(*numStudents); i++){
		for(j=0; j<(*numStudents); j++){
			if (s[j].GPA < s[i].GPA){
				temp = s[i]; // struct with lowest gpa is placed in temp
        			s[i] = s[j]; // first struct now becomes struct with highes gpa
        			s[j] = temp; // second struct now has lowest gpa
				printf("%.2f, %.2f\n", s[i].GPA, s[j].GPA);
			}
		}
	}
}


// prints a menu option of 4 coices for the user to select from
int printMenu(){
	int option;
	printf("Please select an option:\n");
	printf("\t1. Add a student\n\t2. Print students currently saved\n");
	printf("\t3. Change GPA of a Student\n\t4. End program");
	printf("\n\n");
	scanf("%d", &option);
	return option;
}
