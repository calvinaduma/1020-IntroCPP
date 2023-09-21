/* CReview.c */

#include <stdio.h>

int increment(int x); 	// prototype
int number = 3;			// global variable


int main()  {
	/* BASIC TYPES REVIEW */
	int x = 4;
	int y = 7;
	char a = 'b';
	float f = -3.4;
	float e = 54.123456789;
	double d = 54.123456789;

	printf("\n\nx and y are ints: %d %d\n", x, y);  // 4  7
	printf("a is a character: %c \n", a);           // b

	/* why are the outputs of e and d different? */
	printf("f and e are floats %f %f\n", f, e);     // -3.400000  54.123455
	printf("d is a double %lf\n\n", d);				// 54.123457
	// e doesn't have enough bits to fully represent the value
	// d has enough bits, and rounds when displayed in shorter form


	printf("e to 4 decimal places is %.4f\n", e);  // 54.1235
	printf("d to 4 decimal places is %.4lf\n", d); // 54.1235
												  
	printf("f and e to 9 decimal places are %.9f  " "and %.9f\n", f, e); 	
		// -3.400000095  54.123455048
	printf("d to 9 decimal places is %.9lf \n\n", d); // 54.123456789


	/* OCTAL AND HEX REVIEW */
	int intVar = 12;
    
	printf("\nintVar is %d\n", intVar);
	// %p format specifier for an address 
	printf("address of intVar is %p\n\n", &intVar);	
    
    printf("using %%x with hex code 0x41:  %x\n", 0x41);  	// %x prints 41f
    printf("using %%#x with hex code 0x41:  %#x\n", 0x41);	// %#x prints 0x41f
    printf("using %%X with hex code 0x41:  %X\n", 0x41);		// %X prints 41F
    printf("using %%#X with hex code 0x41:  %#X\n\n", 0x41); // %#X printf 0X41F

    printf("\nusing %%o with octal code 0101:  %o\n", 0101);	// %o prints 101
    printf("using %%#o with octal code 0101:  %#o\n\n", 0101);// %#o prints 0101

    // all of these print %c with ASCII decimal, hex, and octal
    // values for the letter A
    printf("Here is the letter A (using %%c with decimal code 65):  %c\n", 65);
    printf("Here is the letter A (using %%c with hex code 0x41):  %c\n", 0x41);
    printf("Here is the letter A (using %%c with octal code 0101):  %c\n\n", 
			  0101);

	/* STATIC AND GLOBAL REVIEW */
	printf("x is %i\n", x);
	printf("number is %i\n", number);

	increment(x);
	printf("x is %i\n", x);
	printf("number is %i\n", number);

	increment(x);
	number = increment(x);
	printf("x is %i\n", x);
	printf("number is %i\n", number);

	return 0;
}


int increment(int x) {
	static int number = 7;

	number++;
	x += 5;

	printf("x is %i\n", x);
	printf("number is %i\n", number);

	return number;
}

