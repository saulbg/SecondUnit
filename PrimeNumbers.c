#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int i , num, count=0;
		
		printf("Write your number: "); 
		scanf("%i", &num);
		
		for(i=1; i<=num; i++) // We put a cycle to verify if the number is prime //
		{
			if(num%i==0)
			{
				count++;
				
			}
		}
		if(count>2) 
		{
			printf("\n 0"); // If it's 0 is not a prime number //
			
		}
		else
		{
			printf("\n 1"); // If it's 1 it's a prime number //
		}
		return 0;
	}
