#include<stdio.h>
#include<string.h>
void main()
{
    int i,l,j,temp;
    char s[20],b[20];
    printf("enter your name\n");
    gets(s);
    l=strlen(s);
for (i = 0; i < l-1; i++)
    {
      for (j = i+1; j < l; j++)
      {
         if (s[i] > s[j])
         {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
    }
    puts(s);
}
