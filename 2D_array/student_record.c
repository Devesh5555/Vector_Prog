#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int std[20][10],high_sc=0,std_roll;

	int row=sizeof(std)/sizeof(*std);
	int col=sizeof(*std)/sizeof(**std);

	srand(getpid());
	int i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
           std[i][j]=rand()%100;
	}
	}

	for(i=0;i<row;i++,printf("\n")){
		printf("Student %3d  : ",i);
        for(j=0;j<col;j++){
	printf("%3d ",std[i][j]);
	}
	}

	for(i=0;i<row;i++){
		int sum=0;
	for(j=0;j<col;j++){
	     sum+=std[i][j];

	}
		if(sum>high_sc){
		      high_sc=sum;
		      std_roll=i;
		}
	}

	printf("Highest Score is %d and Scored By student Roll no %d.\n",high_sc,std_roll);
}
