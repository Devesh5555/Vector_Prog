/*
	
	   *  
	  **        *
	 ***      * * *
	****    * * * * *
	 ***      * * *
	  **        * 
           *
	   
*/

#include<stdio.h>
int main(){

	int n,a,b,A;
	printf("Enter the Value : ");
	scanf("%d",&n);

	for(a=-n;a<=n;a++,printf("\n")){
		A=(a < 0 )?-a:a;
	for(b=0;b<=n;b++){
	
		if(b<A)
			printf(" ");
		else
			printf("* ");  // 65+(b-A) 
	       
		// only Adding space with Star * will give us squar 
	}
	}
}
