/*
WAP to find factorial of a number given .

Ex. i/p: 5   o/p: 120 
*/

#include <stdio.h>
  
  int main(){
  
	  unsigned long int x,y=1;
	  printf("Enter Value : ");
	  scanf("%lu",&x);

	  while(x>0){
	  y=y*x;x--;
	  }

	  printf("The Factorial is %lu.\n",y);
  }
