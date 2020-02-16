#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char s[20],t[20];
    printf("enter your first name");
    gets(s);
    printf("enter your last name");
    gets(t);
    for(i=0;s[i]!='\0';i++)
    {

    }
    for(j=0;t[j]!='\0';j++)
    {

        s[i]=t[j];
         i++;
    }
    s[i]='\0';
    puts(s);
}
