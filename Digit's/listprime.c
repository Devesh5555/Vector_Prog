#include<stdio.h>

int main(){

	int min,max,i,j,cnt=1;
	printf("Enter Min : ");
	scanf("%d",&min);
	printf("Enter Max : ");
	scanf("%d",&max);

	for(i=min;i<=max;i++){
	for(j=2;j<=i/2;j++){
	
		if(i%j==0){
		
			 cnt=0;
			break;
		
		}

		 if(cnt==1){

                printf("%d,",i);
        }
	}
	/*
	if(cnt==1){
	
		printf("%d,",i);
	}
	*/

	}

	printf("\n");


}
