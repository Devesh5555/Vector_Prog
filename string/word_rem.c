#include<stdio.h>
#include<string.h>

void delete_word(char *p,int len);
void remove_null(char *str,int len);
int  main(){

	char str[]="This is the book";
	int w_del=0,w_cnt=1,w_len;
	printf("Enter the String : ");
	scanf("%[^\n]s",str);
	while(getchar()!='\n');
	printf("Enter Number of Word to Delete : ");
	scanf("%d",&w_del);

	int len=strlen(str);
	char *p=str;
	for(;p=strtok(p," ");p=NULL)
	{
	         if(w_del==w_cnt)
		 {
		       w_len=strlen(p);
		       remove_null(str,len);
		       //printf("After Null remove : %s \n",str);
		       //printf("The len of Word : %d\n",w_len);
		       delete_word(p,w_len);
		       break;
		 }
		 w_cnt++;
	}

	printf("Updated String : %s\n",str);
}

void remove_null(char *str,int len)

{

int i=0;
for(;i<len;i++)
	if(str[i]=='\0')
		str[i]=' ';

}

void delete_word(char *p,int len)
{

	memmove(p,p+len+1,strlen(p+len+1)+1);
}
