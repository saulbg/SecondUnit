#include<stdio.h>
#include <stdlib.h>
#include<string.h>



int main(int argc,char *argv[])
{
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	int i, j;
	for (i=n1; i<=n2; i++)
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
		
	
