#include<stdio.h>
#include<string.h>
void main()
{
   int  flag=0,i,j,k;
    char s[20],rev[20];
    printf("enter your name");
    gets(s);
    printf("Your Name is -->%s\n",s);
    for(j=i-1;j>=0;j--)

{
   rev[k]= s[j];
   k++;
}
for(i=0;i<'\0';i++)
{
    if(rev[i]!=s[j])
    {
         flag=1;
        break;

    }
}
    if(flag==0)
    {
        printf("the name is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
}

