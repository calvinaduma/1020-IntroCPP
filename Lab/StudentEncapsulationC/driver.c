/*  Calvin Aduma
    caduma | Section 001 | Nushrat Humaira
    Lab 04
    September 14, 2020
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// This program creates a data base of students using structs and pointers that can be
// printed onto the screen. The program records the Name, CUID, Age, and GPA.

int main(){
  int arrayNum, menuChoice;
  int studentNumber = 0;
  printf("Maximum number of records you want to enter?\t");
  scanf("%d", &arrayNum);
  printf("\n\n");
  // allocates enough memory based on user input
  struct Student *studentPointer = (struct Student*)malloc(sizeof(struct Student)*arrayNum);
  // loop to continue printing menu based on how many records user indicated to create
  while (studentNumber<=arrayNum){
    menuChoice = printMenu();
    switch (menuChoice){
      case 1:
        addStudents(studentPointer, &studentNumber);
        break;
      case 2:
        bubbleSort(studentPointer, &studentNumber);
        printStudents(studentPointer, &studentNumber);
        break;
      case 3:
        changeGPA(studentPointer);
        break;
      case 4:
        return 0;
    }
    // loop for when max number of entries have been used but user wants to edit entries
    while (studentNumber==arrayNum && menuChoice != 4){
      menuChoice = printMenu();
      switch (menuChoice){
        // error displayed here because user cannot enter anymore entries
        case 1:
          fprintf(stderr, "You have passed the limit of students to input!\n");
          break;
        case 2:
          bubbleSort(studentPointer, &studentNumber);
          printStudents(studentPointer, &studentNumber);
          break;
        case 3:
          changeGPA(studentPointer);
          break;
        case 4:
          return 0;
      }
    }
  }
  free(studentPointer); // pointer freed to prevent leakage
  return 0;
}
