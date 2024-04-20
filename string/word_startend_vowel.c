#include<stdio.h>
#include<string.h>

int check_vowel(char ch);
int check_word(char *p);
int main(){

	char arr[]="Once Upon a time in india";
		int str_len=strlen(arr);
	char *p=arr;
	for(;p=strtok(p," ");p=NULL)
	{
	          if(check_word(p)){
		  printf("%s ",p);
		  }
	}
}

int check_word(char *p){

	int len =strlen(p);
	 
	if(check_vowel(p[0])&&check_vowel(p[len-1]))
	{
	return 1;
	}
	return 0;
}

int check_vowel(char ch){

	switch(ch){
	
		case 'u':
		case 'o':
		case 'i':
		case 'e':
		case 'a':
		case 'U':
		case 'O':
		case 'I':
		case 'E':
		case 'A':return 1;
	}

	return 0;

}
