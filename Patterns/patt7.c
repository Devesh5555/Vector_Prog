/*
	*   *	A   A   A   A
	** **   AB BA   BA AB
        *****   ABCBA   CBABC
*/

#include<stdio.h>

int main(){

	int n,a,b,A;
	printf("Enter the Value :");
	scanf("%d",&n);

	for(a=n;a>=0;a--,printf("\n")){
     

		for(b=-n;b<=n;b++){
	
			A=(b<0)?-b:b;
			if(A>=a)
				printf("%c",65+(n-A)); //  65+(A-a) 
			else
				printf(" ");
	}
	}

}
