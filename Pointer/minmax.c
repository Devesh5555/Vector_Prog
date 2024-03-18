#include<stdio.h>

void min_max(int,int *,int *,int *,int *);
int main(){

	int data,min=9,max=0,cnt_min=0,cnt_max=0;
/*	int *pmin=&min;
	int *pmax=&max;
	int *pcnt_min=&cnt_min;
	int *pcnt_max=&cnt_max;

	*/
	printf("Enter Number :");
	scanf("%d",&data);
	min_max(data,&min,&max,&cnt_min,&cnt_max);
	//min_max(data,*pmin,*pmax,*pcnt_min,*pcnt_max);i
	
	printf("Min : %d  and  Freq : %d \n",min,cnt_min);
	printf("Max : %d  and  Freq : %d \n",max,cnt_max);
}

void min_max(int data,int *pmin,int *pmax,int *pcnt_min,int *pcnt_max)
{
	int num=data;

	while(data>0)
	{
	
		if(data%10<*pmin)
			*pmin=data%10;
		else if(data%10>*pmax)
			*pmax=data%10;

		data/=10;
	}

	while(num>0){
	
		if(num%10==*pmin)
			(*pcnt_min)++;
		else if(num%10==*pmax)
			(*pcnt_max)++;
		num/=10;
	}



	return;

}
