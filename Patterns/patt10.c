/*
 
******
*    *
*    *
*    *
*    *
******

*/
#include<stdio.h>
int main(){

	int n,a,b;
	printf("Enter the value : ");
	scanf("%d",&n);

	for(a=0;a<=n;a++,printf("\n")){
	
		for(b=0;b<=n;b++){
		
			if(a==0||a==n){
			
				printf("*");
			}
			else if(b==0||b==n){
			printf("*");
			}
			else{
			printf(" ");
			}
		}
	}
}
