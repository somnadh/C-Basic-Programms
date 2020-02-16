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
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
         j=i;
        while(j>0&&a[j-1]>a[j])
        {

            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
       }
    }
     printf("Sorted array elements are===>");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
}
