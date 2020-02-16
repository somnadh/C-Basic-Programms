#include<stdio.h>
void main()
{

  int k;
    int n,j,i,c;
    printf("enter elements u want to need\n");
    scanf("%d",&k);
    int a[k];
    printf("entet %d elemets\n",k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("prime numbers are\n");
    for(i=0;i<k;i++)
    {
        n=a[i];
        c=0;
        for(j=2;j<n;j++)
        {
        if(n%j==0)
        {
        c++;
        break;
        }
        }
        if(c==0)
        printf("prime num in array is :%d\n",n);


}
}


