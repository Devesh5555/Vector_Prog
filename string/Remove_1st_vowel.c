#include<stdio.h>
#include<string.h>
/*

          I/p                 o/p
        "vector"            "vctor"

*/
int main(){

        char s1[20];

        fgets(s1,20,stdin);

        int l=strlen(s1),i,post;
        for(i=0;i<l;i++)
        {
                int flag=0;

                switch(s1[i])
                {

                                case 'a':
                                case 'A':
                                case 'E':
                                case 'e':
                                case 'I':
                                case 'O':
                                case 'U':
                                case 'i':
                                case 'o':
                                case 'u':flag=1;
                                post=i;
                                break;

                }
                if(flag)
                        break;
        }


        for(i=post;i<l;i++)
                s1[i]=s1[i+1];

        printf("%s",s1);

}
