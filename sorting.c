#include<stdio.h>
void main()
{
    int i,n,temp=0,j;
    printf("enter elements u need to sort");
    scanf("%d",&n);
    printf("enter %d elements",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
  {
        for(j=i+1;j<n;j++)
           {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    printf("\nafter sorting in assending order\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\nafter sorting in desending order\n");
     for(i=(n-1);i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}


