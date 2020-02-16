#include<stdio.h>
void main()
{
    int n,rem=0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("enter Number to print no of each digit repeates");
    scanf("%d",&n);

    while(n>0)
    {
        switch(rem=n%10)
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        case 7:
            g++;
            break;
        case 8:
            h++;
            break;
        case 9:
            i++;
            break;
        case 0:
            j++;
            break;
        }
        n=n/10;

    }
    if(a>1)
        printf("1 is repeates %d times\n",a);
    if(b>1)
        printf("2 is repeates %d times\n",b);
    if(c>1)
        printf("3 is repeates %d times\n",c);
    if(d>1)
        printf("4 is repeates %d times\n",d);
    if(e>1)
        printf("5 is repeates %d times\n",e);
    if(f>1)
        printf("6 is repeates %d times\n",f);
    if(g>1)
        printf("7 is repeates %d times\n",g);
    if(h>1)
        printf("8 is repeates %d times\n",h);
    if(i>1)
        printf("9 is repeates %d times\n",i);
    if(j>1)
        printf("0 is repeates %d times\n",j);


}



