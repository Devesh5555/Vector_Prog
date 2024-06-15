#include <stdio.h>
#include <ctype.h>

#define max 100


char arr[max];
char postfix[max];
int top=-1;

void push(char ch);
char pop(void);


int main(){
	char exp[max];
	int i=0,j=0;
	printf("Enter the Expretion \n:- ");
	scanf("%s",exp);
	char temp;

	while(exp[i]!='\0'){

		// it will check all openning braces and operatores and push in stack " arr "
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='['||exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='%')
			push(exp[i]);

                // when closing braces encountered pop stack will we get its closing brace and collect that data in " postfix "
		else if(exp[i]==')'){
			while((temp=pop())!='('){
				postfix[j++]=temp;
			}
		}
		else if(exp[i]=='}'){
			 while((temp=pop())!='{'){
                                postfix[j++]=temp;
                        }
		}
		else if(exp[i]==']'){
			 while((temp=pop())!='['){
                                postfix[j++]=temp;
                        }
		}

		// if operant encountered store in postfix
		else if(isalpha(exp[i])){
			postfix[j++]=exp[i];
		}
		i++;
	}

	if(top==-1&&exp[i]=='\0'){
		printf("balance expration\n");
		printf("%s\n",postfix);
	}
	else
		printf("Not a balance expration\n");

}

void push(char ch){
	if(top==max-1)
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

