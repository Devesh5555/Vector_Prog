/*
 	ABCDCBA
	ABC CBA
	AB   BA
	A     A
	AB   BA 
	ABC CBA
	ABCDCBA

*/

#include<stdio.h>

int main(){

	int n,a,b,A,B;
	printf("Enter value : ");
	scanf("%d",&n);

	for(a=-n;a<=n;a++,printf("\n")){
		A=(a<0)?-a:a;
		for(b=-n;b<=n;b++){
		
			B=(b<0)?-b:b;
			if(A+B>=n)
				printf("%c",65+(n-B));
			else
				printf(" ");
		}
	
	}
}
