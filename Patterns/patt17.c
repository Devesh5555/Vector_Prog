/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 4 4 1
1 5 5 5 5 1
 * */
#include<stdio.h>

int main(){

	int n,a,b,B;
	printf("Enter the value : ");
	scanf("%d",&n);

	for(a=0;a<=n;a++,printf("\n")){
	
		for(b=-n;b<=n;b++){
		//for(B=n;B>=0;B--){

			B=(b<0)?-b:b;
			if(a==B  || B<a){
			
				if(a==B)
				printf("1 ");
				if(B<a&&(B+a)%2==0)
					printf("%d ",a);
			}
			else
				printf(" ");
		}
	}
}
