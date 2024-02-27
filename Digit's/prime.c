#include<stdio.h>
//#include<math.h>

int main(){

	int x,i,j=1;
	printf("Enter the Number : ");
	scanf("%d",&x);

	for(i=2;i<=x/2;i++){
	
		if(x%i==0){
	          j=0;
	  	  break;
		}
	}

	if(j==1)
		printf("Prime Number.\n");
	else
		printf("Not Prime.");
}
