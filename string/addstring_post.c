#include<stdio.h>
#include<string.h>
int main(){

        char s1[20],s2[20];

        int post;
        puts("Enter String 1 : ");
        gets(s1);
        puts("Enter String 2 : ");
        gets(s2);
	puts("Enter postion : ");
	scanf("%d",&post);

	if(post<strlen(s1)&&post>-1){
        strcat(s2,s1+post);
        strcpy(s1+post,s2);
	

        printf("String s1 : %s \n String s2 : %s \n",s1,s2);
	}
	else{
	
		puts("Invalid Postion Entered.\n");
	}


}
