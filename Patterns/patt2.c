/*
	******		* * * * * *
	 *****		  * * * *
	  ****              * * 
	   ***               *
	    **
	     *
	     

	    */




#include<stdio.h>

int main(){

	int n,a,b;
	printf("Enter the Value : ");
	scanf("%d",&n);

	for (a=1;a<=5;a++,printf("\n")){
		for (b=1;b<=n;b++){
			if(b<a){
				printf(" ");
			}
			else{
				printf("*"); // only adding space with * will create reverse triangle
			}
		}
	}


}
