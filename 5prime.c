#include<stdio.h>
void main()
{
    int n,i,j,c,c1=0;
    printf("enter no to print prime num up to n");
    scanf("%d",&n);
    i=2;
    while(1)
    {
      if(c1==n)
      {
          break;
      }
    c=0;
    for(j=2;j<(i/2);j++)
    {
        if(i%j==0)
        {
            c++;
            break;
        }
    }
       if(c==0)
    {
        printf("\t%d",i);
        c1++;
    }
    i++;
    }
}

