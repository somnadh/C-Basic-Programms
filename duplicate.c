#include<stdio.h>
void main()
{


    int n,j,i,k=0,isthere;
    printf("enter elements u want to need\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("entet %d elemets\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          isthere=0;
         for(j=0;j<n;j++)
         {
             if(b[j]==a[i])
             {
             isthere=1;
             break;
            }
        }
         if(isthere==0)
         {
             b[k]=a[i];
             k++;
         }
    }

     for(i=0;i<k;i++)
     {
         printf("%d\t\t",b[i]);
     }
}
