
#include<stdio.h>
void main()
{
    int n,i,c,j,k=0,l;
    printf("enter any num");
    scanf("%d",&n);
    int a[n];
    for(i=2;i<n;i++)
    {
         c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
        {
            c++;
            break;
        }
        }
        if(c==0)
        {
           a[k]=i;
           k++;
        }
    }
    for(l=0;l<=k;l=l+2)
    {
        printf("%d\t",a[l]);
    }

}
