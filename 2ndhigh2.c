
#include<stdio.h>
void main()
{

    int a=0,temp,digit,n;
    printf("ente any number");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;//we get last digit
        if(digit>a)
        {

            temp=a;
            a=digit;

        }
        else if(digit>temp)
        {
            temp=digit;
        }
        n=n/10;
    }
    printf("2nd largest number%d",temp);

}
