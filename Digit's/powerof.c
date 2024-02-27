/*
 
WAP to varify that X is the Power of Y or Not.
Ex.   i/p :-  x=100       o/p :- No
 	      y=5     	
	  
      i/p :-  x=125       o/p :- Yes
              y=5      	      

*/

#include<stdio.h>

int main(){

	int x,y,p=1;
	printf("Enter Num : ");
	scanf("%d",&x);
	printf("Enter Power : ");
	scanf("%d",&y);

	if(x<0){
	printf("Invalid Number.");
	}
	else{
	
		while(p<x){
		
			p=p*y;
		}

		if(p==x){printf("Yes\n");}
		else{printf("No\n");}
	}
}
