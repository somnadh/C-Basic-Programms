#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a num to print table's range up to 12\t");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        printf(" TABLE OF %d is------>\n",i);
         for(j=1;j<=12;j++)
    {
        printf("%d*%d=%d\n",i,j,(i*j));
    }
    printf("\n\n\n");
    }
}
