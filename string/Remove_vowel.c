#include<stdio.h>
#include<string.h>
/*

          I/p                 o/p
        "embedded"            "mbddd"

*/
int main(){

        char s1[20];

        fgets(s1,20,stdin);

        int l=strlen(s1),i,j,post;
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


                }
                if(flag)
                {
        for(j=post;j<l;j++)
                s1[j]=s1[j+1];
                }
        }

        printf("%s",s1);

}
