#include <stdio.h>
#include <string.h>

int add_two_numb(int x, int y) // We make our function of two variables //
{
	return x+y; //Here we make the addition//
}

int main (int argc, char** argv) // We use our main function with parameters //
{
	int num1=atoi(argv[1]); //convert the strings in integers//
	int num2=atoi(argv[2]);
	int result= add_two_numb(num1,num2); // We call the function and match it with the variable//
	printf("The adittion is: %d \n", add_two_numb(num1,num2));
	return num1+num2;
}

