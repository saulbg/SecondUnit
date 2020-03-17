#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main(int argc, char** argv){ // We put parameters //
		int i, count=0;
			int num = atoi(argv[1]);
		
		for(i=1; i<=num; i++) // Make a cycle to very if the number is prime //
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
