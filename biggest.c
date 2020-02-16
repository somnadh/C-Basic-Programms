#include<stdio.h>
void main()
{
    int n,i,rem=0,rev=0,temp,big=0,sec,ss=0;
    printf("enter no to find  biggest digit along with location");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        if(big<rem)
            {
            big=rem;

            }

        n=n/10;
    }

       printf("%d is a big number of %d\n",big,temp);


}
