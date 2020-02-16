#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("enter no to print prime num up to n");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
    c=2;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c++;
            break;
        }
    }
       if(c==2)
    {
        printf("\t%d",i);
    }
    i++;
    }
}
