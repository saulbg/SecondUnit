#include <stdio.h>
#include <string.h>

int subs_two_num(int x, int y)// We make our function of two variables //
{
	return x-y; //Here we make the substraction//
}

int main (int argc, char** argv) // We use our main function with parameters //
{
	int num1=atoi(argv[1]); //Convert the strings in integers//
	int num2=atoi(argv[2]);
	int result= subs_two_num(num1,num2); // We call the function and match it with the variable//
	printf("The substraction is: %d \n", subs_two_num(num1,num2)); // We print the result //
	return 0;
}

