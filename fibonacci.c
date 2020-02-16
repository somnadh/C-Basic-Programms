#include<stdio.h>
void main()
{

int a=0,b=1,c=0,n,i;
printf("enter any number to genearate fibonacci series");
scanf("%d",&n);
for(i=0;i<n;i++)
{
     printf("%d\t",c);
    c=a+b;
    a=b;
    b=c;

}
}
