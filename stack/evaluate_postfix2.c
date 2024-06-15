#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50


char arr[MAX];
int postfix[MAX];
int top=-1,j=-1;

void push(char  ch);
char pop(void);
int calculate_exp(int ,int ,char );
char * getString(void);

//int op_value[MAX];

int main(){
	int op_value[MAX];
	char exp[MAX];
	int i=0,op1,op2,len,flag=0;
	char temp,*op_name;
	printf("Enter the Expretion \n:- ");
	scanf("%s",exp);
	__fpurge(stdin);
	printf("Enter Operator Name Used :");
	op_name=getString();
	printf("Enter Value for Operator \n");
	for(i=0;i<strlen(op_name);i++){

		printf("%c : ",op_name[i]);
		scanf("%d",&op_value[i]);
	}

	i=0;
	while(exp[i]!='\0'){

		if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='%'||exp[i]=='=')
		{	 
			if(exp[i]=='='){
				char x1,x2;
				x2=pop();
				x1=pop();
				printf("x1=%c x2=%c\n",x1,x2);
				int n=x1-65;
				printf("n=%d\n",n);
				op_value[n]=(x2-48);
				postfix[++j]=op_value[n];
				flag=0;

			}

			else{
				// poping two operants for calculation
                                // flag indicating no of operand present in stack
				// after the first calculation of two operand there result is pushed in "postfix"
				// when next single operand incounted and along with next as operator else if block is exicuting
				// it taking result of privious calculation as op1 and currently pushed operand in stack as op2 and there result 
				// again pushed to in "postfix" at storing result.
				if(flag==2){
					op2=op_value[pop()-65];
					op1=op_value[pop()-65];
				}
				else if(flag==1){
					op1=postfix[j--];
					op2=op_value[pop()-65];

				}
				else{

					op2=postfix[j--];
					op1=postfix[j--];
				}

				// normal calculation of two operants with its operator

				postfix[++j]=calculate_exp(op1,op2,exp[i]);
				flag=0;
			}
		}

		// if operant encountered store in postfix
		else{
			push(exp[i]);
			//printf("pushing to stack = %c\n",exp[i]);
			flag++;
			//printf("flag values = %d\n",flag);
		}
		i++;
	}

	if(top==-1 && exp[i]=='\0'){
		printf("balance expration\n");
		printf("Result : %d\n",postfix[0]);
		//printf("j=%d  top=%d",j,top);
	}
	else
		printf("Not a balance expration\n");

}

void push(char ch){
	if(top==MAX-1)
		printf("stack is full\n");
	else
		arr[++top]=ch;
}

char pop(void){
	if(top==-1)
		return -1;
	else 
		return arr[top--];
}

int calculate_exp(int x,int y,char oprt)
{
	switch(oprt)
	{
		case '+': return (x+y);  
		case '-':  return (x-y);
		case '/':  return (x/y);
		case '*':  return (x*y);
		case '%': return (x%y);
			  //	case '=': return  
	}
}

char * getString(){
	char *temp=NULL;
	int i=0;

	do{
		temp=realloc(temp,i+1);
		temp[i]=getchar();
	}while(temp[i++]!='\n');

	temp[i-1]='\0';
	return temp;
}
