#include <stdio.h>
#include <stdlib.h>

/* FizzBuzz*/
/* The FizzBuzz have 3 conditionals, the first if the number is multiple of 3 the program has to print "Fizz"
the second if the numer is multiple of 5 the program print Buzz and the last if the number is multiple
of 3 AND 5 the program prints "FizzBuzz" */

int main()
{
	int i;
	for(i=0; i<=200; i++) // We put a loop to repeat the search process, in this case we are goin to see te numbers since 1 to 200 //
	{
		if (i%3==0 && i%5==0) // We put a conditional, this is for print fizzbuzz //
		{
			printf("FizzBuzz \n");
		}
		else
		{
			if (i%3==0) //If the first conditional is not met, the loop passes to another conditional//
			{
				printf("Fizz \n");
			}
			else
			{
				if (i%5==0) // The third conditional, this is for print Buzz //
				{
					printf("Buzz \n");
				}
				else // In the case that any conditional is not met, this print the rest of the numbers //
				{
					printf("%d \n", i);
				}
			}
		}
	}
}
