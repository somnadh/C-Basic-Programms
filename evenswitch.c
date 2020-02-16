#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter a no print even up to\n");
    scanf("%d",&n);
    printf("----->even num are\n");
    for(i=2;i<=n;i++)
        {
    switch(i%2)
    {
        case 0:printf("%d\t ",i);
        sum=sum+i;
    }
}
printf("\nsum of even no are :%d",sum);
    return 0;
}
