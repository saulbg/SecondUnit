#include <stdio.h>
#include <stdlib.h>

void main (int argc, char**argv){ // We use our main function with parameters //
	int limit= atoi(argv[1]); //convert the strings in integers//
	int i;
	for (i=1; i<= limit; i++) // We put a loop to print the counter
	{
		printf("Counter is on %d \n", i);
	}
}

