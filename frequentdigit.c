#include<stdio.h>
void main()
{

    int n,a[10],i,rem=0;
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
printf("enter any number\n\t");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    a[rem]++;
    n=n/10;
}
for(i=0;i<10;i++)
{
if(a[i]>0)
 printf("%d repeats %d times\n\n",i,a[i]);
}
}
