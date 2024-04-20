#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

        char arr[30];
        gets(arr);
        int len=strlen(arr),cnt=1,flag=1;

        int num=0,dec=0;
	float sum;
        char *p=arr;
	if(*p=='-')
	{
	flag=-1;
	p++;
	}
        while(isdigit(*p)){

                num=num*10+(*p-48);
                p++;
        }
        if(*p=='.'&&isdigit(p[1])){
        p++;
        while(*p){

		if(isdigit(*p)){

                dec=dec*10+(*p-48);
                p++;
                cnt*=10;
		}

		else if(*p!='\0')
		{
                printf("ERROR");
                return 0;
		
		}
        }

        }

        else{
        printf("ERROR");
        return 0;
        }

        //dec=dec/cnt;
        //num=num+dec;
        
	num=num*cnt+dec;
	sum=((float)num/cnt)*flag;

	printf("After : %f\n",sum);




}
