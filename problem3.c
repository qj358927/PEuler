/*7Quigon7 qj358927@gmail.com*/
/*This function will calculate the largest prime factor of large numbers
 under 18 digits anyway*/
#include <stdio.h>
int main(){

 static unsigned long long Num = 0; /*the large number*/

 static unsigned long long prime = 2; /*the beginning prime*/

 static int inc = 1; 

 if(Num == 0)
   scanf("%llu",&Num);

 while(Num % prime != 0){
   prime += inc;
   if(prime == 2) //once passed two skip all even possibilities
     inc++;
   if(Num <= prime) //if the number is less than or equal break out*/
     break;
   
 }
 if(Num >= prime){ /*if number is still larger than the prime repeat*/
  
   /*when we find a prime print it and call the function again*/
   printf("%llu * ", prime); 
   /*divide the number by the divisor and store the result*/
   Num /= prime;
   main();
 }
 else
   
   printf("\n");
 return 0;
   
  
}

