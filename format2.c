#include<stdio.h>
#include<string.h>
main()
{
    char str[30];
    int i,l;
    printf("Enter String : ");
    gets(str);
    l=strlen(str);
    for(i = 0;i<l ; i++)
    {
        if(i>=l-2)
        {
           str[i]= toupper(str[i]);
           str[i]++;
        }

    }

    printf("\n%s", str);

}


