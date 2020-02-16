#include<string.h>
void main()
{
    int a=0,n=0,i,m=0;
    char s[20];
    printf("enter your name\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if( ((s[i]>'A') && (s[i]<'Z') )||( (s[i]>'a') && (s[i]<'z')) )

        {
            a++;
        }
        else if((s[i]>='0')&&(s[i]<='9'))
           {
               n++;
           }
           else
            {
                m++;
            }
    }
    printf("\n%d alphabets in %s\n",a,s);
     printf("\n%d numbers in %s \n",n,s);
      printf("\n%d special characters in %s\n",m,s);
}
