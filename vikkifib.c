
#include<stdio.h>
main()
{
int a=0,b=1,c=0,n,con=2;
printf("ëntr how many fib want print");
scanf("%d",&n);
printf("%d\n%d\n",a,b);
while(1)
{
    if(con==n)
        break;
    c=a+b;
    printf("%d\n",c);
    con++;
    a=b;
    b=c;
}

}
