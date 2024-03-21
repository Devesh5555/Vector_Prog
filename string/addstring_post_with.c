#include<stdio.h>
#include<string.h>
int main(){

        char s1[20],s2[20],temp[20];

        int post;
        puts("Enter String 1 : ");
        gets(s1);
        puts("Enter String 2 : ");
        gets(s2);
	puts("Enter postion : ");
	scanf("%d",&post);

        
        strcpy(temp,s1+post);
        strcpy(s1+post,s2);
        strcat(s1,temp);

        printf("String s1 : %s \n String s2 : %s \n",s1,s2);


}
