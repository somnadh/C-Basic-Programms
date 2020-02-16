#include<stdio.h>
void main()
{
    int i,n,j=0,k=0;
     int a[10],b[10],c[10];
    printf("enter elements u need\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)

    {
        if(a[i]>0)
            {
            b[j]=a[i];
            j++;

            }

        else
        {
            c[k]=a[i];
            k++;
        }
    }


    printf("postive numbers numbers are--->\n\n");
    for(i=0;i<j;i++)
    {
        printf("%d\n\n",b[i]);
    }
     printf("negitive numbers are--->\n\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n\n",c[i]);
    }



}

