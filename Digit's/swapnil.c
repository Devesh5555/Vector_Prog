
/*
a
12
BCD
1234
efghi
123456
JKLMNOP
 * */


#include<stdio.h>
int main(){

	
	
		int n,i,j,A=65,a=97,sign=1;
		printf("Enter n : ");
		scanf("%d",&n);

		// loop 1
		for(i=0;i<n;i++,printf("\n")){
		
			// loop 2
			for(j=0;j<=i;j++){
			
				// for printing Alphabet in even lines of loop 1
				if(i%2==0)
				{
				
					// for changing cases Lower case when sign=1 and Upper case sign=0
					if(sign){
						printf("%c",a++);
						
					}
					else
					{
						printf("%c",A++);
						a++;
					}
				}
				// for printing number staring from 1 at every odd line of loop 1
				else
					printf("%d",1+j);
			}

			// for changing the sign status and converting current recuring alphabet of LC in UC.
			if(i%2==0)
			{
			
				
				A=a&~(1<<5);
				sign=!sign;
			}
		}
	}
