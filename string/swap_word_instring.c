#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void swap_word(char *str,char *w1,char *w2);
void remove_null(char *p,int len);
int main(){

	char arr[50],*w_p1,*w_p2;
	int w_cnt=1,p1,p2;
	printf("Enter the string : ");
	scanf("%[^\n]s",arr);
	printf("Enter the positions for word : (P1 & P2) : ");
	scanf("%d%d",&p1,&p2);

	printf("Enter String : %s \n",arr);
	int str_len=strlen(arr);
	char *p=arr;
	for(;p=strtok(p," ");p=NULL)
	{
	    if(w_cnt==p1){
	         int len=strlen(p);
		 w_p1=malloc(len+1);
		 strncpy(w_p1,p,len+1);
	    }

	    else if(w_cnt==p2){
	      
	         int len=strlen(p);
		 w_p2==malloc(len+1);
		 strncpy(w_p2,p,len+1);
	    }
	    w_cnt++;
	}

	remove_null(arr,str_len);
        swap_word(arr,w_p1,w_p2);

	printf("Swaped String : %s \n",arr);
}


void remove_null(char *p,int len){

	int i=0;
	for(;i<len;i++)
		if(p[i]=='\0')
			p[i]=' ';

}

void swap_word(char *str,char *w1,char *w2){

	int len=strlen(str);
	int len1=strlen(w1);
	int len2=strlen(w2);

        char *p=strstr(str,w1);


	memmove(p,p+len1,strlen(p+len1)+1);
	memmove(p+len2,p,strlen(p)+1);
	strncpy(p,w2,len2);

	p=strstr(p+1,w2);
	 memmove(p,p+len2,strlen(p+len2)+1);
        memmove(p+len1,p,strlen(p)+1);
        strncpy(p,w1,len1);



}
