#include<stdio.h>
void main()
{
    int n,i,rem1=0,rem2=0,temp,c=0,rev=0;
    printf("enter Number to add first and last number");
    scanf("%d",&n);
    temp=n;
     rem1=n%10;
    while(n>0)
    {
        rem2=n%10;
        n=n/10;
    }
    printf("this is rem2 value:%d\n",rem2);

    printf("addition of last and first didit is=%d",(rem1+rem2));
}

