#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
  int array1[4] = {50,100,150,200};
  int i;
  printf("\nFOR Loop\n");
  for(i=0; i<4; i++){
    printf("array1[%d] = %d\n", i, array1[i]);
  }
  printf("\nWHILE Loop\n");
  i=0;
  while(i<4){
    printf("array1[%d] = %d\n", i, array1[i]);
    i++;
  }
  printf("\nDO-WHILE Loop\n");
  i=0;
  do {
    printf("array1[%d] = %d\n", i, array1[i]);
    i++;
  } while (i<4);
  printf("\nNESTED Loop\n");

  int a,b;
  for(a=0; a<3; a++){
    for(b=0; b<5; b++){
      printf("*");
    }
    printf("\n");
  }

  printf("\nNEW PROGRAM\n");
  int number;
  int sum=0;
  do {
    printf("Enter a number: ");
    scanf("%d", &number);
    sum += number;
  } while (number != -99);
  printf("Sum = %d\n", sum+99);
  return 0;
}
