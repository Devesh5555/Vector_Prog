/*

	****
	 ***
	  **
	   *
	  **
	 ***
	**** 

*/


#include<stdio.h>

int main(){

	int n,a,b,A;

	printf("Enter the Value : ");
	scanf("%d",&n);

	for(a=-n;a<=n;a++,printf("\n")){
	
		A=(a<0)?-a:a;
		for(b=n;b>=0;b--){
		
			if(b>A)
				printf(" ");
			else
				printf("* ");
		}
	}
}
