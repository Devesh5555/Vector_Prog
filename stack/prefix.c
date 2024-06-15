#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 100


char arr[max];
char prefix[max];
int top=-1,j=0;

void push(char ch);
char pop(void);

int check_operator(char op);
int comp_operator(char op);

void reverse_arr(char *p);
int main(){
	char exp[max];
	int i=0;
	printf("Enter the Expretion \n:- ");
	scanf("%s",exp);
	reverse_arr(exp);
	char temp;
//	i=strlen(exp)-1;
	
	while(exp[i] != '\0'){



		// it will check all closing braces and  push in stack " arr "
		if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
			push(exp[i]);

		else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='%')
		{
			//if(check_operator(exp[i])){

			if(comp_operator(exp[i])){
				prefix[j++]=pop();
				push(exp[i]);

			}
			else
				push(exp[i]);

		}
		// when closing braces encountered pop stack will we get its closing brace and collect that data in " postfix "
		else if(exp[i]=='('){
			while((temp=pop())!=')'){
				prefix[j++]=temp;
			}
		}

		
		else if(exp[i]=='{'){
			while((temp=pop())!='}')
                         prefix[j++]=temp;

		}
		else if(exp[i]=='['){
			while((temp=pop())!=']')
				prefix[j++]=temp;


		}

		// if operant encountered store in postfix
		else if(isalpha(exp[i])){

			prefix[j++]=exp[i];

		}

		i++;
	}
	


	reverse_arr(prefix);

	if(top==-1){
		printf("balance expration\n");
		printf("%s\n",prefix);
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

void reverse_arr(char *p){
	int len=strlen(p);
	int l=0,r=len-1;

	while(l<r){
		char temp=p[l];
		p[l]=p[r];
		p[r]=temp;

		l++,r--;
	}
}

int check_operator(char op){

	if(prefix[top]!='-'||prefix[top]!='+'||prefix[top]!='/'||prefix[top]!='*'||prefix[top]!='%')
		return 0;
	else 
		return 1;
}

int comp_operator(char op){

	if((prefix[top]=='%'||prefix[top]=='*'||prefix[top]=='/')&&(op=='+'||op=='-'))
		return 1;
	else 
		return 0;
}
