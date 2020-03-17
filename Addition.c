#include <stdio.h>
#include <stdlib.h>

int addition(int x, int y) // We make our function of addition //
{
	return x+y; // Do the addition //
}

int main ()
{
	int x,y;
	printf("Ingrese dos cantidades: \n");
	scanf("%d %d", &x, &y);	// Read the information that the user entered //
	printf("The addition is: %d \n", addition(x,y)); // We print the result of the function //
}
