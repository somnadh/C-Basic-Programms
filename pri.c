#include<stdio.h>
void main()
{
    int n,i,c=2;
    printf("enter no to check prime or not");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            c++;
        break;
    }
    if(c==2)
    {
        printf("%d is prime number",n);
    }
    else{printf("not prime no");}
}
