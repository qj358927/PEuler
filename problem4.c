/*7Quigon7 qj358927@gmail.com*/
/*This program will calculate the largest palindrom number that is the
 *product of 2 3-digit numbers*/

#include <stdio.h>
#include <string.h>
/*maximum of 7 characters for the digits*/
#define MAXLEN 7
#define RADIX 10
#define MAX(a,b) (a>b)? a:b; 

int is_palindrome(int);
int main(){


  int i,j; //loop indexes
  
  int largest=0;


  for(i = 100; i<1000; i++){

    for(j = 100; j<1000; j++){
      if( is_palindrome(i*j) ==0 ){ //for all combinations of [1,1000] check
	largest = MAX(largest,i*j); //then take the largest one
      } 
    }

  }
  printf("%d\n",largest);

  
  return 0;
}



//this function will convert an integer to its base 10 string without \0
int is_palindrome(int input){

  int radix = RADIX; //the radix of the base we are in
  char character;   //the charcter we will form
  int i; //loop index
  char temp; //for switching
  int j=0;
  char rev[MAXLEN],string[MAXLEN];
  for(i = 0; input !=0; i++){
  
    character = input%radix + 48;//add ascii constant to the character
    input = input/radix; //divide by our radix to get the next digit
    
    string[i] = character; //set current index to that character
  
  }
  string[i--] = 0; //append null character
  
  strcpy(rev,string); //copy the reverse
  
  for(; i>=j; i--){
    //reverse the string
    temp = string[i];
    string[i] = string[j];
    string[j++] = temp;

  }
  //if the same return 1 else return 0 
  return strcmp(rev,string);
}
