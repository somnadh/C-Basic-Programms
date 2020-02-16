#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,fact=1,temp=0;
    printf("enter a no to print factorial!\n");
    scanf("%d",&n);
     i=1;
     while(i<n)
        {
            fact=fact*i;
            i++;
        }
        if(temp==fact)
        printf("%d is factorial of ",fact);
    return 0;
}
