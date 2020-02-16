#include<stdio.h>
#include<string.h>
void main()
{
    int v=0,c=0,i;
    char s[20],b[20];
    printf("enter your name");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
		s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            b[i]=s[i];
        }

    }

}

