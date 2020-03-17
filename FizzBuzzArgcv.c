#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* FizzBuzz*/
/* The FizzBuzz have 3 conditionals, the first if the number is multiple of 3 the program has to print "Fizz"
the second if the numer is multiple of 5 the program print Buzz and the last if the number is multiple
of 3 AND 5 the program prints "FizzBuzz" */

int main(int argc, char *argv[]) // We put out parameters //
{ 
	
	int i;
	int n=atoi(argv[1]);
	
	for(i=1;i<=n;i++) // We make a cycle to count each number //
	{
	if(i%3==0 && i%5==0) //
	{
	printf("FizzBuzz\n");
	}
		else if(i%3==0)
		{
		printf("Fizz\n");
		}
			else if(i%5==0)
			{
			printf("Buzz\n");
			}
				else printf("%d\n", i);
	}
	
	
	
	
	
	
}
