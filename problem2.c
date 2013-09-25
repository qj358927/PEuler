/*7Quigon7 qj358927@gmail.com*/
/*The purpose of this programs is to find the sum total of fibonacci numbers up to n where n < 4x10^6*/

#include <stdio.h>
#include <stdlib.h>
/*the fib terms will not go above this number*/
#define MAX 4000000
#define INC 30;
int main(void){

  int i = 0;//loop index

  int size = INC;

  int *fibVector; //Our dynamic array to hold the fibsequence

  unsigned long sum; //integer to hold our sum

  /*allocate 30 integer units for the vector initially*/
  if( (fibVector = (int *) calloc(size, sizeof(int))) == NULL){
    fprintf(stderr,"Error Allocating Memory for vector\n");exit(1);
  } 

  fibVector[i++] = 1; /*seed the fib sequence*/

  fibVector[i++] = 2; /*    ''    */

  sum = 2;            /*start the sum */

  while(fibVector[i-1] < MAX){/*continue unill term is greater than 4000000*/
    
    if(i%size == 0){ /*if we have reached the end of the allocated space*/

      fibVector = (int *)realloc(fibVector, (size + i)*sizeof(int));/*reallocate another 30 blocks*/
      
    }
    /*set the current memory location to the sum of two previous entries*/
    fibVector[i] = fibVector[i-1] + fibVector[i-2];
    
    /*then add what was just put in vector to sum if it is even*/
    sum += (fibVector[i++]%2) ? 0:fibVector[i-1];  

    printf("%d %d\n",i-1,fibVector[i-1]);

  } 

  printf("%ld\n",sum);
  return 0;

}
