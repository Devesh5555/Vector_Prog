#include<string.h>
#include<stdio.h>

int main(){

        printf("#########-----WAP to sort a word In given String-----#########\n");
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
                       
			for(int i=0;i<len-1;i++){
			for(int j=i+1;j<len;j++){
			
				if(p[i]>p[j])
				{
				    char temp=p[i];
				    p[i]=p[j];
				    p[j]=temp;
				}
			}
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
