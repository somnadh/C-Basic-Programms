#include<stdio.h>
void main()
{

int a=0,b=1,c=0,n,i,vikram=0;

printf("enter any number to check fibonacci series or not");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    a=b;
    b=c;
    c=a+b;
    if(c==n)
    {
         vikram=1;
         break;
    }

}
if(vikram==1)
{
    printf("%d is fibonacci no",n);

}
else
    {
        printf("not fivonacci no");
}

}
