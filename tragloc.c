#include<stdio.h>
void main()
{
    int n,i,rem=0,temp,small=9,c=0,loc;
    printf("enter no to find smallest digit among the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
      c++;
        rem=n%10;
        if(small>rem)
            {
            small=rem;
            loc=c;
           }

        n=n/10;
    }

       printf("%d is a small Digit in  %d with the location of %d\n",small,temp,loc);


}
