#include <stdio.h>

int main()
{
    int n,rs=0;
    printf("Enter a amount to Display Possibility of Denomination ");
    scanf("%d",&n);
    if(n>1000)
    {
        rs=n/1000;
        printf("1000 notes are \t:%d\n",rs);
        n=n%1000;
    }
    if(n>=500)
    {
        rs=n/500;
        printf("500 notes are \t:%d\n",rs);
        n=n%500;
    }
     if(n>=200)
    {
        rs=n/200;
        printf("200 notes are \t:%d\n",rs);
         n=n%200;
    }
     if(n>=100)
    {
        rs=n/100;
        printf("100 notes are \t:%d",rs);
        n=n%00;
    }
     if(n>=50)
    {
        rs=n/50;
        printf("50 notes are \t:%d",rs);
        n=n%50;
    }
     if(n>=20)
    {
        rs=n/20;
        printf("20 notes are \t:%d\n",rs);
        n=n%20;
    }
     if(n>=10)
    {
        rs=n/10;
        printf("10 notes are \t:%d\n",rs);
        n=n%10;
    }

    if(n>=5)
    {
        rs=n/5;
        printf("5 rupee coins are \t:%d\n",rs);
         n=n%10;
    }
    else
    {
        rs=n/1;
        printf("1 rupee coins are \t:%d",rs);
    }
    return 0;
}
