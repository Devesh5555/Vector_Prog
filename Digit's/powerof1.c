/*
WAP to Verify that the X is power of 2 or Not.
  Ex.   i/p :-  x=24          o/p :- NO
                x=64          o/p  :- Yes

		*/

#include<stdio.h>
int main(){

	int x,y;

	printf("Enter the Num : ");
	scanf("%d",&x);

	y=x-1;

	if(x&y)
		printf("No.\n");
	else
		printf("Yes.\n");
}
