#include<stdio.h>
#include<string.h>
void main()
    int i,j,l;
    int k=0,f=0;
    char s[20];
    printf("enter your name");
    gets(s);
    printf("Your Name is -->%s\n",s);
    for(i=0;s[i]!='\0';i++)
    {
            k++;
    }
    printf("length of ur name is:%d\n",k);
    printf("\n\nreverse of the string is===>");
    for(j=k-1;j>=0;j--)
        {
            printf("%c",s[j]);
        }
            printf("\n");

        for(i=0;i<k;i++)
            {

                if(s[i]!=s[k-i-1])
                    {
                        f=1;
                        break;
                    }
            }

    if(f==1)
    {
       printf("\nstring is not palindrome");
    }
   else
    {
       printf("\nstring is  palindrome");
    }

}

