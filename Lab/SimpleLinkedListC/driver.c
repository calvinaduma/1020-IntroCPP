/* 	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 05
	F20
*/

// this program takes in a users input and appends it to a linked list. The user is able to remove datas
// as well remove an entire node.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SimpleLL.h"

int main(){
	head = NULL;
	int number, loop;
	loop = 1;
	while (loop){
		int choice = printMenu();
		switch (choice){
			case 1:
				printf("Enter number:\t");
				scanf("%d", &number);
				append(number);
				printList();
				break;
			case 2:
				printf("Enter number:\t");
				scanf("%d", &number);
				addFront(number);
				printList();
				break;
			case 3:
				printList();
				break;
			case 4:
				deleteList();
				break;
			case 5:
				loop = 0;
		}
	}
  return 0;
}
