/*
 
*****
 *****
  *****
   *****
    *****

 */

#include<stdio.h>

int main(){

	int n,a,b;

	printf("Enter the Value : ");
	scanf("%d",&n);

	for(a=1;a<=n;a++){
	
		for(b=1;b<=2*n-1;b++){
		
			if(b>=a&&b<n+a)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}
}
