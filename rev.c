#include<stdio.h>
void main()
{
    int n,i,rem=0,temp,c=0,rev=0;
    printf("enter Number to check palindrome or not");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
       rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
       printf("%d is palindrome",temp);
       else
 printf("%d is  not palindrome",temp);
}
