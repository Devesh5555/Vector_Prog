#include<stdio.h>
/*
 
   
 Input : n = 4
Output :
1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11

 * */
int main(){

	int n,s=0,A,num=1,a,b,B;

	printf("enter value of N : ");
	scanf("%d",&n);
	A=n*n+1;

	for(a=n;a>0;a--,printf("\n")){
	
		// A=(2*n)+(2*a)+(!(a%2));
		for(b=-(2*n-1);b<2*n;b++){
		
			B=b<0?-b:b;
			if(B%2==1&&B>0&&B<=2*a-1){
			
				if(b<0)
				printf("%d",num++);
				else{
				
					//A=2*n+2*a+(!(a%2));
					printf("%d",A++);
				}
			}

			else if(B<2*a-1)
				printf("*");
			else if(b<0)
				printf("_");
		}
		A-=(2*a-1);
	}
}
