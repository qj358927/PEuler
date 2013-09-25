/*7Quigon7 qj358927@gmail.com*/
/*this program is to obtain the sum total of numbers [1,1000] 
  That are multiples of 3 or 5
*/
#include <stdio.h>
int main(void){


  int i,sum =0;//declare an integer for the loop and a place for the sum

  

  for(i = 1; i<1000; i++){ //run the loop from 1 to 1000
      
    sum += (i%3 && i%5) ? 0:i;//add to i 0 or i if i is 0mod3 or mod5

    }
  printf("Sum is : %d\n",sum);fflush(stdout);


  return 0;

}
