/*

* * * * * *
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
* * * * * *

*/#include<stdio.h>

int main(){

        int n,a,b,B,A;

        printf("Enter the Value : ");
        scanf("%d",&n);

        for(a=-n;a<=n;a++,printf("\n")){
        A=(a<0)?-a:a;
        for(b=-n;b<=n;b++){
        B=(b<0)?-b:b;
        if(A==n){
		if(b<=0)
		printf("* ");
	}
	else if(A==B)
                printf("*");
        else
                printf(" ");
        }
        }
}
