/* program 6-14.cpp from book
   converted to C

   This is a modular, menu-driven program that computes
   health club membership fees.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayMenu();
int getChoice();
void showFees(char category[], double rate, int months);

int main() {
   // Constants for monthly membership rates
   const double ADULT_RATE  = 50.0,
                CHILD_RATE  = 29.0,
                FAMILY_RATE = 69.0;
   int choice;
   int months;  // number of months being paid

   do {
      displayMenu();
      choice = getChoice(); // Assign to choice the value returned
                             // by the getChoice() function
      if (choice != 4) {    // If user does not want to quit, proceed
         printf("For how many months? ");
         fflush(stdin);
         scanf("%d", &months);

         switch (choice) {
            case 1:  showFees("Adult", ADULT_RATE, months);
                     break;
            case 2:  showFees("Child", CHILD_RATE, months);
                     break;
            case 3:  showFees("Family", FAMILY_RATE, months);
         }
      }
   } while (choice != 4);

   return 0;
}


/**********************************************
 *                 displayMenu                *
 * This function clears the screen and then   *
 * 	displays the menu choices.              *
 * No inputs or outputs.                      *
 **********************************************/
void displayMenu() {
	system("clear");          // Clear the screen.
	printf("\n  Health Club Membership Menu\n\n");
	printf("1.  Standard Adult Membership\n");
	printf("2.  Child Membership\n");
	printf("3.  Family Membership\n");
	printf("4.  Quit the Program\n\n");
}


/**************************************************
 *                    getChoice                   *
 * This function inputs, validates, and returns   *
 * 	the user's menu choice.                     *
 * Inputs:  none											  *
 * Outputs:  the user's choice                    *
 **************************************************/
int getChoice() {
	int choice;

	scanf("%d", &choice);
	while (choice < 1 || choice > 4) {
		printf("The only valid choices are 1-4. Please re-enter. ");
		scanf("%d", &choice);
	}
	return choice;
}

/*****************************************************************
 *                          showFees                             *
 * This function uses the membership type, monthly rate, and     *
 * 	number of months passed to it as arguments to compute and    *
 * 	display a member's total charges. It then holds the screen   *
 * 	until the user presses a key. This is necessary              *
 * 	because after returning from this function the displayMenu   *
 * 	function will be called, and it will clear the screen.       *
 *****************************************************************/
void showFees(char memberType[], double rate, int months) {
	int input;
	printf("\nMembership Type : %s\nNumber of months: %d\nTotal charges: %.2lf\n",
			  memberType, months, rate * months);

	// Hold the screen until the user presses a key.
	printf(" \nPress any letter to return to the menu. ");
	scanf("%*[\n]");
	getchar();
}
