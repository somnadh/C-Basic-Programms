#include<stdio.h>
void main()
{
    int n,i,rem=0,temp,big=0,c=0,loc;
    printf("enter no to find biggest digit among the number");
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

       printf("%d is a big number in location %d\n",big,loc);


}
