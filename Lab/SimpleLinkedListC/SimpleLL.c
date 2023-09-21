/*	Calvin Aduma
	caduma | Section 001 | Nushrat Humaira
	Lab 05
	F20
*/

#include "SimpleLL.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// prints the list of linked nodes
void printList(){
	node_t* temporary;
	temporary = head;
	while (temporary != NULL){ // makes sure printing stops once the end of last node is reached
		printf("%d\n", temporary->data);
		temporary = temporary->next; // points to next data to print
	}
}

// adds a node to the end of the linked lists. accepts an integer and returns nothing.
void append(int num){
	node_t *temporary = (node_t*)malloc(sizeof(node_t));
	node_t *current = (node_t*)malloc(sizeof(node_t));
	temporary->data = num;
	temporary->next = NULL;
	if (head==NULL){ // in the event that there is no value in the linked nodes.
		head = temporary;
	} else { // if there is a value
		current->next = head->next; // current points to old next* value
		current->data = temporary->data; // current value points to new value
		head->next = current; // head points to current which contains new and old value
	}
}
// adds a node to the front of the linked lists. accepts an integer and returns nothing.
void addFront(int num){
	node_t *temporary = (node_t*)malloc(sizeof(node_t));
	temporary->next = head; // temp points to beginning of node
	temporary->data = num; // new data added to beginning of temp.
	head = temporary; // head now contains new data in front of old data in node
}

// deletes the entire linked list. accepts a node pointer and returns nothing.
void deleteList(){
	node_t *temp, *remainingNodes;
	temp = head;
	while (temp != NULL){ // counter for print
		remainingNodes = temp->next;
		free(head);
		temp = remainingNodes;
	}
}

// prints menu and does not accept any datas but returns an integer data
int printMenu(){
	int choice;
	printf("\tWhat do you want to do?\n");
	printf("1. Add node to end of list\n");
	printf("2. Add node to beginning of list\n");
	printf("3. Print current list\n");
	printf("4. Delete current list\n");
	printf("5. Exit\n");
	scanf("%d", &choice);
	return choice;
}
