#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int n1, n2, n3, lowest, middle, highest; // Declare the variables //

   printf("Write the first number: ");
   scanf("%d", &n1);
   printf("Write the second number: ");
   scanf("%d", &n2);         
   printf("Write the third number: ");
   scanf("%d", &n3);

   if (n1 > n2) // We compare each element to see which is greater than the anoter //
   {   
      middle = n1;    
      lowest = n2;   
   } else 
   {
      middle = n2;  
      lowest = n1;  
   } 
   
   if (middle > n3) 
   { 
      highest = middle;    
   
      if (lowest > n3)
      {         
         middle = lowest;                
         lowest = n3;
      }else 
      {
         middle = n3;      
      }         
   }else
   { 
      highest = n3;
   }

   printf("The lowest number is: %d\n", lowest);
   printf("The middle number is: %d\n", middle);
   printf("The highest number is: %d\n", highest);  

   return(0); 
}    
