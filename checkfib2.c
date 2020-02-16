#include<stdio.h>
void main()
{

int a=0,b=1,c=0,n,i,flag=0;
printf("enter any number to check fibonacci series or not");
scanf("%d",&n);
while(c>n)
{
c=a+b;
a=b;
b=c;
if(c==n)
{
  flag=1;
    break;
}
}
if(flag==1)
{
    printf("%d is fibonacci no",n);

}
else {printf("not fivonacci no");}

}
