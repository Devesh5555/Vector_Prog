/*
     *
    * *
   *   *
  *     *
 *       *
* * * * * *
 *
 *
 * */

#include<stdio.h>

int main(){

	int n,a,b,B;

	printf("Enter the Value : ");
	scanf("%d",&n);

	for(a=0;a<=n;a++,printf("\n")){
	
		for(b=-n;b<=n;b++){
		
			B=(b<0)?-b:b;
			if(a<n){if(B==a)
				printf("*");
			else
				printf(" ");
			}
			else{
			if(b<=0)
                                printf("* ");
			}
		}
	
	}
}
