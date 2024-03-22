#include<stdio.h>
int main(){

	int arr_size,subarr_size,i,j,high=0,index;
	scanf("%d",&arr_size);
	if(arr_size>=1&&arr_size<=100)
	{
	
		int arr[arr_size];
		for(i=0;i<arr_size;i++)
			scanf("%d",&arr[i]);

		scanf("%d",&subarr_size);

		for(i=0;i<arr_size-subarr_size;i++)
		{
		
			int sum=0;
			for(j=i;j<i+subarr_size;j++){
			
				sum+=arr[j];
			}

			if(sum>high){
				high=sum;
			
				index=i;
			}
		}

		printf("\nThe max sum in sub array is %d.",high);
      
	      	printf("\nSub array : [ ");

        
		for(i=index;i<index+subarr_size;i++)
                
			printf("%d ",arr[i]);
        
		printf("]");
	}
	else{
	
		printf("invalid size or Overflow.");
		return 0;
	}

	
}
