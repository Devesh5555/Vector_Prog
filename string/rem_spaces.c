#include<stdio.h>
#include<string.h>
/*

          I/p                            o/p
    "   abc   e    d   "	        "abc e d"

*/
int main(){

	char arr[100];

	gets(arr);
	int i;
	printf("lenght before : %d\n",strlen(arr));
	for(i=0;i<strlen(arr);i++){
	
		int l=strlen(arr);
		if(arr[0]==32)
		{
		memmove(arr,arr+1,l);
			i-=1;
		}
		else if(arr[l-1]==32)
		{
		 memmove(arr+l-1,arr+l,1);
                        i-=1;
		}

		else if(arr[i]==32){
		
			if(arr[i]==arr[i+1])
			{memmove(arr+i,arr+i+1,strlen(arr+i));
			i-=1;
			}

		}
	}

	 printf("lenght after : %d\n",strlen(arr));
	puts(arr);
}
