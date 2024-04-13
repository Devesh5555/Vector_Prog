#include<stdio.h>
#include<string.h>

int main(){

	char s1[50],s2[20],*ptr,*ps2,*rev;
	gets(s1);
	gets(s2);
	ps2=s2;
	rev=strrev(s2);

	int l=strlen(s2);
	while(ptr=strstr(s1,s2)){
	strncpy(ptr,rev,l);


	}
}

char *strrev(char *p){

	static char rev[20];

	int l=strlen(p);
	p[l]='\0';
	while(*p){
	
		rev[l-1]=*p;
		l--,p++;
	}

	return rev;
}
