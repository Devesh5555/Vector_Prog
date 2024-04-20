#include<stdio.h>
void right_rot(int*,int,int);
void left_rot(int*,int,int);
int main(){

	int size,rot,i,arr[50];
	char ch;
	scanf("%d",&size);
	if(size<1){
	      printf("Invalid Size");
		return 0;
	}
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);

	while((getchar())!='\n');
	scanf("%c",&ch);
	scanf("%d",&rot);

	switch(ch){
		case 'r': right_rot(arr,size,rot);
			  break;
		case 'l': left_rot(arr,size,rot);
			  break;
		default: printf("Invalid Choice");
			 return 0;
	}

	for(i=0;i<size;i++)
	printf("%d ",arr[i]);

}

void right_rot(int *p,int size,int rot)
{
	int i,j;
for(i=0;i<rot;i++)
                {

                        int temp=p[size-1];
                        for(j=size-1;j>0;j--)
                                p[j]=p[j-1];
                        p[0]=temp;
                }

}

void left_rot(int *p,int size,int rot)
{
        int i,j;
for(i=0;i<rot;i++)
                {

                        int temp=p[0];
                        for(j=0;j<size-1;j++)
                                p[j]=p[j+1];
                        p[size-1]=temp;
                }

}
