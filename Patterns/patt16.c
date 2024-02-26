/*
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15
 * */

#include<stdio.h>

int main(){


	int n,a,b,c=1;
	printf("Enter the value for N : ");
	scanf("%d",&n);

	for(a=1;a<=n;a++,printf("\n")){
	
		for(b=0;b<a;b++){
		printf("%3d",c++);
		}
	}
}
