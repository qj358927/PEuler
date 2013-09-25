/*7Quigon7 qj358927@gmail.com*/
/*this program will find the LCM of the numbers from 1 to input*/
/*
 *Here we have that LCM = Product/GCD this is our key*/
#include <stdio.h>
#include <stdlib.h>
unsigned long long GCD(unsigned long long,unsigned long long);
unsigned long long LCM(unsigned long long,unsigned long long);
unsigned long long LCMRange(int,int);

int main(int argc, char** argv){
  int limit;

  if(argc != 0)
   limit = atoi(argv[1]);
  else
    printf("Error reading input\n");

  printf("%llu\n",LCMRange(1,limit));
  return 0;
}

unsigned long long LCMRange(int a, int b){
  
  if(a == b)
    return b;
  else
    return (unsigned long long)LCM(a,LCMRange(a+1,b));

}

unsigned long long LCM(unsigned long long  a,unsigned long long b){

  if(b%a == 0)
    return b;
  return a*b/GCD(a,b);

}


unsigned long long GCD(unsigned long long a, unsigned long long b){ //Euclidean algorithm b > a
  
  unsigned long long r; //our remainder
  
  if(b<a){
    GCD(b,a); //switch if incorrect order
  }

  
  while(1){

    if(!(r = b%a)) //r is b mod a
      return a; //if r is zero return a

    b = a;  //set a to be the new b

    a = r;  //set r to be the new a
    
  }
  //by euclidean algorithm a is the GCD when r is zero
  return a;

}
