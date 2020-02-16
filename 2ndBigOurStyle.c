
#include<stdio.h>
void main()
{

    int big=0,big2,rem,n,c=0,loc=0;
    printf("ente any number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10; //we get last digit
         c++;
        if(rem>big)
        {
            big2=big;
            big=rem;

        }
        else if(rem>big2)
        {
            big2=rem;
            loc=c;
        }
        n=n/10;
    }
    printf("2nd largest number%d with location %d",big2,loc);

}
