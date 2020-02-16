
#include<stdio.h>
void main()
{

  int k;
    int i,c=0,target,loc=0,flag=0;
    printf("enter elements u want to need\n");
    scanf("%d",&k);
    int a[k];
    printf("entet %d elemets\n",k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter taget number");
    scanf("%d",&target);
     for(i=0;i<k;i++)
     {
         c++;
         if(a[i]==target)
         {
             flag=1;
             break;
         }
     }
     if( flag==1)
     {
         printf("target is found at %d location",c);
     }
     else{
        printf("target is not found");
     }
}
