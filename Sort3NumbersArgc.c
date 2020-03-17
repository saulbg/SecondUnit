#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) // We put parameters //
{
	int n1=atoi(argv[1]); //We put 3 arv because we introduce 3 numbers //
	int n2=atoi(argv[2]);
	int n3=atoi(argv[3]);
	int middle, lowest, highest;
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




