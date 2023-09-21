#include <math.h>
#include <stdio.h>

void times10(int);
int menu();

int main(void){
  int number, choice;
  do {
    choice = menu();
    switch (choice) {
      case 1:
        printf("Enter the number: ");
        scanf("%d", &number);
        times10(number);
        break;
      case 2:
        return(0);
    }
  } while (choice == 1);
  return(0);
}

void times10(int a){
  printf("%d x 10 = %d\n", a, a*10);
}

int menu(){
  int num;
  printf("\nChoose a number\n");
  printf("1. Enter a number to multiply by 10\n");
  printf("2. Quit\n");
  scanf("%d", &num);
  printf("\n");
  return num;
}
