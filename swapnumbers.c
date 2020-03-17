#include <stdio.h>

void swapTwoNumbers(int *a, int *b) // We create a function to assign a temporary value to the variables, also we declare the variables as pointers//
{
	int temp= *a; // The variable temp recieve de value of the pointer a//
	*a= *b; // The pointer a recieve the value of the pointer b //
	*b= temp; // The pointer b recieve the value of the variable temp //
}

int  main(void) {
	int x=27, y=11;
	printf("The first number %d  The second number: %d \n", x,y);
	swapTwoNumbers(&x, &y); // We call the function //
	printf("The numbers swapped are: %d %d \n", x,y);
	return 0;
}
