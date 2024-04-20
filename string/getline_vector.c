#include<stdio.h>
#include<string.h>
#include<stdlib.h>
size_t mygetline(char **, int *, FILE *);
int main(){

	char *ptr=NULL;
	int n=0;

	printf("%lu\n",mygetline(&ptr,&n,stdin));
	printf("str:%s\nn=%d\nstrlen : %lu\n",ptr,n,strlen(ptr));
}

size_t mygetline(char **linestr,int *n,FILE *fg)
{

	char *p=NULL;
	size_t i=0;
	do{
	
		if(i==0){
		*n=120;
		p=malloc(*n);
		}
		else if(i==119){
		*n=240;
		p=realloc(p,*n);
		}
		else if(i>=239){
		*n=i+2;
		p=realloc(p,*n-1);
		}
		p[i]=getchar();
	}while(p[i++]!='\n');

	p=realloc(p,i+1);
	p[i]='\0';
	*linestr=p;
	return i;
}
