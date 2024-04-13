#include<stdio.h>
#include<string.h>

char *mystrtok(char *ptr,char *dil);
int main(){

	char str[]="this is a good book";
	char *p=str;
	for(;p=mystrtok(p," ");p=NULL){
	printf("%s ",p);
	}
}

char *mystrtok(char *ptr,char *dil){
 static char *p;
        static int i=0,len;
        if(ptr!=NULL){
       len=strlen(ptr);
                p=ptr;
                }
        else if(ptr==NULL&&i<len)
                ptr=&p[++i];

                for(;i<=len;i++){
          if(p[i]==*dil)
          {
            p[i]='\0';
        return ptr;
            }
            else if(i==len){
            ++i;
            return ptr;}

        }

        return NULL;
}
