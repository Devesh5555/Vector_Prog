#include<stdio.h>
#include<string.h>
//#include<math.h>
int check_num(char*);
int ascii_num(char*);
int main(){

        char ip1[20];
        char ip2[20];

        int flag;
        do{
        printf("\ninput 1:");
        scanf("%s",ip1);
        printf("input 2:");
        scanf("%s",ip2);

        if(check_num(ip1)&&check_num(ip2))
        {

                int num1=ascii_num(ip1);
                int num2=ascii_num(ip2);
                printf("The Sum of Numbers : %d.",num1+num2);

                flag=0;
        }
        else{

                flag=1;
                printf("\nInvalid Input.");
        }

        }while(flag);


}
int check_num(char *p)
{

        while(*p){
        if(*p>=48&&*p<=57);
        else
                return 0;
        p++;
        }
        return 1;
}

int ascii_num(char *p)
{

        int bit;
        int num=0,sum=0;
        while(*p){
                num=0;
                for(bit=0;bit<8;bit++)
                {
                num+=(*p&(1<<bit));

                }
                num-=48;
                sum=sum*10+num;


        p++;
        }
        return sum;
}
     
