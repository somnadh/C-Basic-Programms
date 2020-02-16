#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("last to first numbers are");
    for(i=9;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }

}

