/*
 
   *
   * *
   * * *
   * * * *
   * * *
   * *
   *

   */

#include<stdio.h>
int main(){
int n,a,b;
printf("Enter the Value for N : ");
scanf("%d",&n);
printf("\n");

for(a=1;a<=n+1;a++,printf("\n")){

	for(b=1;b<=a;b++){
		printf("*");


	}
   }

for(a=n;a>=1;a--,printf("\n")){

        for(b=1;b<=a;b++){
                printf("*");


        }
   }

}
