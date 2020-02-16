#include<stdio.h>
void main()
{
    int n,j,i,diff,smalldiff=999,num1=0,num2=0;
    printf("enter elements u want to need\n");
    scanf("%d",&n);
    int a[n];
    printf("entet %d elemets\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       diff=0;
      for(j=i+1;j<n;j++)
      {
          diff=a[i]-a[j];
          if(diff<0)
          {
              diff=-1*diff;
          }
          if(diff<smalldiff)
          {
              smalldiff=diff;
              num1=a[i];
              num2=a[j];
          }
      }

   }
   printf("least difference teo num are %d%d and difference is%d",num1,num2,smalldiff);
}
