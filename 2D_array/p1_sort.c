#include<stdio.h>
#include<string.h>
#define col 10

//void print1(char (*ptr)[col]);
void print1(char (*)[]);
void sort1(char (*)[]);
void print2(char **);
void sort2(char **);
int main(){

	char arr1[][col]={"int","double","char","float"};
	char * arr2[]={"signed","volatile","static","unsigned"};

	printf("# Before the Sorting the Array : \n");

	print1(arr1);
	print2(arr2);
	printf("\nAfter the Sorting the Array : \n");

	sort1(arr1);
	sort2(arr2);
	print1(arr1);
	print2(arr2);

}

void print1(char (*ptr)[col]){

	int i;
	for(i=0;i<4;i++)
		printf("%s,",ptr[i]);
	printf("\n");

}

void print2(char **ptr){

	int i;                                                                                                                
	for(i=0;i<4;i++)
		printf("%s,",ptr[i]);
	printf("\n");

}

void sort1(char (*ptr)[col]){

	int flag,i,j;
	for(j=4-1;j>0;j--){
		flag=1;
	for(i=0;i<j;i++)
		if(strcmp(ptr[i],ptr[i+1])>0)
		{
			flag=0;
			char str[col];
			strcpy(str,ptr[i]);
			strcpy(ptr[i],ptr[i+1]);
			strcpy(ptr[i+1],str);
		}
	if(flag)
		break;
	}
}

void sort2(char **ptr){   

         int i,j,flag;
        for(j=4-1;j>0;j--){
		flag=1;
        for(i=0;i<j;i++)
		if(strcmp(ptr[i],ptr[i+1])>0)
		{
			flag=0;
			char *str=ptr[i];
			ptr[i]=ptr[i+1];
			ptr[i+1]=str;

		}
	if(flag)
		break;

	}
}

