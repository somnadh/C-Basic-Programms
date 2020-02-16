#include<stdio.h>
void main()
{
    int i,p=0,q=0,n;
    printf("enter elements u need\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            p++;
        else
            q++;

    }
    printf("%d positive numbers in array\n",p);
    printf("%d negitive numbers in array\n",q);
}
