#include <stdio.h>

int main()
{
    int i=5,*p1;
    int j=6,*p2;
    p2=&j;
    p1=&i;
    
    *p1^=*p2^=*p1^=*p2;
    
    printf("value in *p1 is %d.\nvalue in *p2 is %d.\n",*p1,*p2);
    printf("Hello World");

    return 0;
}
