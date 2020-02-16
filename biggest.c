#include<stdio.h>
void main()
{

  int k;
    int i,c,big,loc,small;
    printf("enter elements u want to need\n");
    scanf("%d",&k);
    int a[k];
    printf("entet %d elemets\n",k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0,big=0,loc=0;
    for(i=0;i<k;i++)
    {
        c++;
      if(a[i]>big)
      {
          big=a[i];
          loc=c;
      }
    }
    printf("%d is a biggest num at %d location\n",big,loc);
     c=0,small=9,loc=0;
    for(i=0;i<k;i++)
    { c++;
      if(a[i]<small)
      {
          small=a[i];
          loc=c;
      }
    }
    printf("%d is a smallest num at %d location\n",small,loc);
}
