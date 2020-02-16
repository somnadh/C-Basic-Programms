#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum,j;
    printf("enter a number to print perfect number up to that number!\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
{
           sum=0;
            for(i=1;i<j;i++)
            {
            if(j%i==0)
            sum=sum+i;
            }
            if(sum==j)
            {
            printf("%d ",j);
            }


}
        return 0;
}
