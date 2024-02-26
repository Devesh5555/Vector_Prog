/*

* * * * * *     *
 *       *
  *     *
   *   *
    * *
     *
 * */



#include<stdio.h>

int main(){

        int n,a,b,B;

        printf("Enter the Value : ");
        scanf("%d",&n);

        for(a=n;a>=0;a--,printf("\n")){

                for(b=-n;b<=n;b++){

                        B=(b<0)?-b:b;
                        if(a==n&&b<=0)
			{

                                printf("* ");
                        }
                        else if(a==B)

			{ printf("*");}
			else{printf(" ");}
                }

        }
}
