
#include<stdio.h>
void main()
{
   int i,j,bigfact=0,bignum=0,c;
    printf(" highest factor of num and its biggest factor\n\n");
    for(i=1;i<50;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c>bigfact)
            {
                bignum=i;
                bigfact=c;
            }
    }
    printf("%d has highest factor of %d\n",bigfact,bignum);
    printf("%d has highest factors\n",bignum);
}

