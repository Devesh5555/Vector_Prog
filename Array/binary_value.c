#include<stdio.h>
#include<string.h>
#include<math.h>
int myatoi(char*,int);
int main(){

	char arr[33];

	int i,flag=1,num;
	fgets(arr,33,stdin);

//	printf("\n%s.....%d\n",arr,strlen(arr));

	if(arr[strlen(arr)-1]=='\n')
		arr[strlen(arr)-1]='\0';

//	printf("\n%s.....%d\n",arr,strlen(arr));

	for(i=0;i<strlen(arr);i++)
	{
	
		if(!(arr[i]==48||arr[i]==49)){
		
			printf("Invalid Binary Entered.\n");
	
			flag=0;
		
			break;
		}

	}

	if(flag){

		num=myatoi(arr,strlen(arr));
	
		printf("In decimal : %d\nIn Hexadecimal : %x\nIn Octal : %o\n",num,num,num);
	}

}


int myatoi(char *p,int size)
{

	int num=0;
	while(size--)
	{
	if(*p-48){
	
		//num=num+pow(2,(size-1));
		num+=(1<<size);
	}
	p++;

	}

	return num;

}
