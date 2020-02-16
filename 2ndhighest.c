
#include<stdio.h>
void main()
{
    int n,i,rem=0,temp,big1=0,c=0,big2=0;
    printf("enter no to find biggest and second bidigit among the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        if(big1<rem)
            {
            big1=rem;
            }
         n=n/10;
    }
    while(temp>0)
{

        rem=temp%10;
        if((big1!=rem)&&(big2<rem))
            {
            big2=rem;
            }
         temp=temp/10;
}
       printf("%d is a big number\n",big1);
        printf("%d is a 2nd big number\n",big2);


}
