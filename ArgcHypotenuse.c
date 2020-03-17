#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

float main(int argc, char** argv) // We put parameters //
{ 
	float hyp;
	float cat1=atof(argv[1]); // Convert arguments in floatings //
	float cat2=atof(argv[2]);
	hyp= sqrt(cat1*cat1 + cat2*cat2); // Do the operation //
	printf("%f\n",hyp);
	return 0;
}
