#include<stdio.h>
void main()
{
    int i,p=0,q=0,n;
    printf("enter elements u need");
    scanf("%d",&n);
    printf("enter %d elements",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            p++;
        if(a[i]<a[i+1])
            q++;
    }
    if(p==n-1)
    {
        printf("array elements are desending  order");
    }
    else if(q==n)
    {
         printf("array elements are asending order");

    }
    else
        {
        printf("elements are disorder");
        }



}
