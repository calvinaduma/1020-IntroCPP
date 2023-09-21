/*  Calvin Aduma
    caduma | Section 001 | Nushrat Humaira
    Lab 02
    August 31, 2020
*/

// This program recreates Fibonacci numbers 0-89
#include <stdio.h>

// prototype
void fib1(int a[]);

int main() {
  // variables
  int arr[2];

  // initialize and print the first elements of array since they do
  // not follow the standard fibonacci sequence
  arr[0] = 0;
  arr[1] = 1;
  printf("0 1 ");
  fib1(arr);
  printf("\n");
  return 0;
}

// This function manipulates and prints the elements of the array together to produce fibonacci numbers.
void fib1(int a[]){
  // variables
  int sum = 0;
  
  // the first two numbers in the fibonacci sequence are almost arbitrary since they are not
  // formed from addition of two preceding numbers, therefore they have to be printed out manually.
  do {
    sum = a[0] + a[1]; // sum is created here before any manipulation of the array
    a[0] = a[1]; // necessary to create the sequence where the next number in the sequence is the sum of the two previous.
    a[1] = sum; // making sum the second element in array so the added sequence can be followed correctly.
    printf("%d ", sum); // sum is printed to show the sequence
  } while (sum < 89); // this program should only go to 89.
}
