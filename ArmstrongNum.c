
#include<stdio.h>
int main()
{
int i,j,ssum,rem,temp,n;
printf("enter number");
scanf("%d",&n);

for(j=100;j<=n;j++)
        {
    sum=0;
    rem=0;
    temp=j;
    i=j;
while(i>0)
{
    rem=i%10;
    sum=sum+(rem*rem*rem);
    i=i/10;
}
if(sum==temp)
{
    printf("%d is armstrong number\n",sum);
}

}
return 0;
}
