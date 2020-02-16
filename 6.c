void main()
{
    int i,n,j;
    printf("enter a number of rows to print upper triangle");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)

    {
        printf("*");

    }
     printf("\n");
    }
}
OUTPUT:
enter a number of rows to print upper triangle5
*****
****
***
**
*
