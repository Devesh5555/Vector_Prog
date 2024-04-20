#include<string.h>
#include<stdio.h>

int main(){

	printf("#########-----WAP to Reverse a word In given String-----#########\n");
	char arr[50];
	int i,pos,w_cnt=1;
	printf("Enter String : ");
	scanf("%[^\n]s",arr);
	printf("Enter the Position : ");
	scanf("%d",&pos);

	printf("Before reverse : %s\n",arr);
	int str_len=strlen(arr);
	char *p=arr;
	for(;p=strtok(p," ");p=NULL){
	
		if(w_cnt==pos){
			int len=strlen(p);
			int l=0,r=len-1;
			while(l<r){
			
				char temp=p[l];
				p[l]=p[r];
				p[r]=temp;
				l++,r--;
			}
	                 break;	
		}

		w_cnt++;
	}

	for(i=0;i<str_len;i++){
	
		if(arr[i]=='\0')
			arr[i]=' ';
	}

	printf("After reverse : %s\n",arr);

	
}
