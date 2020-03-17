#include <stdio.h>
#include <sdtlib.h>

int main ()
{
	int i, j;
	for (i=1500; i<=2100; i++) // we put a cycle from 1500 to repeat the process until 2100 //
	{
		if (i%100!=0) // We put a conditional that means if the mod of i and 100 is different of 0 enter the cycle //
		{
			if(i%4==0 || i%400==0) // If the condition is fullfilled is going to print the year //
			{
				printf("%d \n", i);
				j++; // Also add 1 to the counter to the year //
			}
		}
	}
	printf("Leap Year Count: %d \n", j); // Print the amount of leapyears //
}
