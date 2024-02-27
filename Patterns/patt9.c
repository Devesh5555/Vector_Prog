/* 
    *         *
   * *       * *
  * * *     * * * 
 * * * *   * * * *
* * * * * * * * * *  
 * * * *   * * * *
  * * *     * * *
   * *       * *
    *         *
*/


#include<stdio.h>
int main(){

	int n,a,b,A,B,B1;

	printf("Enter the Value  : ");
	scanf("%d",&n);

	for(a=-n;a<=n;a++,printf("\n")){
		A=(a<0)?-a:a;
		for(b=-(3*n-1);b<=(3*n-1);b++){
			B=(b<0)?-b:b;
			B1=(B>=(n+1))?(B-(n+1)):((n+1)-B);
                                 
			if(A+B1<=n && (A+B1)%2==n%2){  ///  ||A+B1==0
				printf("*");
			}

			else{
				printf(" ");
			}

		}
	}

}
