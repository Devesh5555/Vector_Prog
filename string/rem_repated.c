#include<stdio.h>
#include<string.h>

int main(){

	char arr[30];
	gets(arr);
	int i,j,z;
	for(i=0;i<strlen(arr)-1;i++)
	{

	
		for(j=0;j<strlen(arr);j++)
		{
		
			if(i==j)
				continue;
			if(arr[i]==arr[j])
			{
				
			memmove(arr+j,arr+j+1,strlen(arr+j));
			//printf("\n%s",arr);
			j-=1;
			}
		}
	}

	printf("\n%s",arr);
}
