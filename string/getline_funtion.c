#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_getline(char **,int *,FILE *);
int main(){

        char *ptr=NULL;
	int n=0;
        printf("Enter the String : ");
	printf("return of function call : %d\n",my_getline(&ptr,&n,stdin));
       // printf("Entered String : %s\n",ptr);
          //printf("str:%s\n",ptr);
        printf("n=%d\nstrlen=%lu\n",n,strlen(ptr));
}

int my_getline(char **ptr,int *n,FILE *fg)
{
	int i=0;
	char *p=NULL;
	do{
	      if(i==0){
		      *n=120;
	      p=malloc(*n);
	      }
	      else if(i==120){
		      *n=240;
	      p=realloc(p,*n);
	      }
	      else if(i>=240){
		      *n=*n+1;
	      p=realloc(p,*n);
	      }
	      p[i]=getchar();
	}while(p[i++]!='\n');

	p=realloc(p,i+1);
	*n=*n+1;
	p[i]='\0';
	*ptr=p;
	return i;


}
