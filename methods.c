#include<stdio.h>
#include<string.h>
void main()
{
    int l;
    char s[20];
    char k[20];
      char j[20];
    printf("enter your name via reading gets method\n");
    gets(k);
    puts(k);
    printf("enter your name reading from scanf\n\n");
    scanf("%s",s);
    printf("Your Name is -->%s",s);
    l=strlen(k);
    printf("\n\nlength of the %s is %d",k,l);
    strcpy(j,s);
    strrev(j);

    if(strcmp(j,s)==0)
    {
        printf("\nstring is palindrome");
    }
    else
        {
            printf("\nnot palind");
    }
}
