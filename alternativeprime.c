#include<stdio.h>
void main()
{

    int n,j,i,c,k=0;
    printf("enter elements u want to need\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("entet %d elemets\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("alternative prime numbers are\n");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<a[i];j++)
        {
        if(a[i]%j==0)
        {
        c++;
        break;
        }
        }
        if(c==0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i+=2)
    {
        printf("%d\t\t",b[i]);
    }
}



