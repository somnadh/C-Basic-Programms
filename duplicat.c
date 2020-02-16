#include<string.h>
void main()
{
    int i;
    char s[20],b[20];
    printf("enter your name\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if((i%2)==0)
        {
            b[i]=tolower(s[i]);
        }
        else
            {
            b[i]=toupper(s[i]);
            }
    }
   puts(b);

    }

