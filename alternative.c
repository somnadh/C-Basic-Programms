#include<stdio.h>
void main()
{
    int n,i,rem=0, evensum=0,c=0,loc,oddsum=0;
    printf("enter no to print odd sum even sum");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c++;
        loc=c;
        if(loc%2==0)
        {
            evensum=evensum+rem;
        }
        else{
            oddsum=oddsum+rem;
        }
        n=n/10;
    }

       printf("%d is sum of odd location\n",oddsum);
        printf("%d is sum of even location\n",evensum);


}

