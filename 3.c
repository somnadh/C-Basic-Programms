#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10],n,sum=0,*ptr,i;
printf("enter elements");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
ptr=a[0];
for(i=0;i<n;i++)
{
 sum+=*(ptr+i);
}
printf("sum of array elements %d",sum);
}
