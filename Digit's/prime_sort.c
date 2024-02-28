#include<stdio.h>
#include<math.h>

int main(){

        int min,max,i,j,flag1,flag2;

        printf("Enter the Range Min and Max value : \n");
        scanf("%d%d",&min,&max);

        for(i=min;i<=max;i++){
                 flag1=1;
                for(j=2;j<=sqrt(i);j++){

                        if(i%j==0){

                                flag1=0;
                                break;
                        }

                }

                if(flag1){
                int pre_cnt=9,cur_cnt;
                int temp=i;
		
			 while(temp>0){

                        flag2=1;
                        cur_cnt=temp%10;
                        if(pre_cnt<cur_cnt)
                        {
                               while(temp>0){ 
				pre_cnt=cur_cnt;
				temp=temp/10;
				cur_cnt=temp%10;
				if(pre_cnt>cur_cnt){
				
					flag2=0;
					break;
				}
			       }

			       break;
                           
                        }
                        pre_cnt=cur_cnt;
                        temp=temp/10;

                }

		
               
	       
		}


		if(flag1&&flag2){
                
			printf("%d, ",i);
               
	       	}
                
	}


        }
