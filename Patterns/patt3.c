/*
	1
	11
	111
	1111
	11111

*/

#include<stdio.h>

int main(){
int n,a,b;
printf("Enter the Value  : ");
scanf("%d",&n);

for(a=1;a<=n;a++,printf("\n")){
for(b=1;b<=a;b++){

	printf("%c ",64+b);

}
}

}
