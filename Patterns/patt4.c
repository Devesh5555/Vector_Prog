/*
	1
	01
	101
	0101
	10101
	010101

*/

#include<stdio.h>

int main(){

	int n,a,b;
	printf("Enter the Value : ");
	scanf("%d",&n);

	for(a=1;a<=n;a++,printf("\n"))
	{
		for(b=0;b<a;b++)
		{
		
			printf("%d",(a+b)%2);
		}
	
	}
}
