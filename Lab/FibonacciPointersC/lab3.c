/*  Calvin Aduma
    caduma | Section 001 | Nushrat Humaira
    Lab 03
    September 07, 2020
*/

// This program recreates Fibonacci numbers 0-89 using pointers
#include <stdio.h>
#include <stdlib.h>

// prototype
void fib2(int* a);

int main()
{
  int *pointer = (int *)malloc(sizeof(int) * 2); //allocates memory for 2 int variables
  *pointer = 0; // initialize first sequence of fibonacci numbers
  *(pointer + 1) = 1;
  printf("\n%d %d ", *(pointer), *(pointer+1)); // prints first sequence here. Can be printed in function also
  fib2(pointer);
  printf("\n");
  free(pointer); // frees allocated memory to prevent leaks
  return 0;
}

// functions

// this function accepts a pointer as an input. the first 2 addresses of the allocated space
// is printed after 1 is added to both. the second address is added to the first address
// then the first address, with the new element, is added to the second address. this is all in a
// loop to stop when the second addresss is less than or equal to 89.
void fib2(int* input){
  *input += 1;
  *(input + 1) += 1;
  while (*(input + 1) <= 89){
    printf("%d %d ", *input, *(input + 1));
    *input += *(input+1);
    *(input+1) += *input;
  }
}
