#include<stdio.h>
void main()
{
    int a[20];
    int n,temp,j,i;
    printf("enter size of any ");
    scanf("%d",&n);
    printf("Nter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    printf("Sorted array elements are===>");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
}
