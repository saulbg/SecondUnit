#include <stdio.h>
#include <stdlib.h>
#include <math.h> //We add this library because it contains math operations //

float main(void) //In this case we use the float function //
{
	float cat1, cat2, hyp; // Declare the variables //
	printf("Introduce the first leg: \n");
	scanf("%f", &cat1);
	printf("Introduce the second leg: \n");
	scanf("%f", &cat2);
	hyp= sqrt(cat1*cat1+cat2*cat2); // Do the operations //
	printf("The hypotenuse is: %f \n", hyp);
}
