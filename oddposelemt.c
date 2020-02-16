#include<stdio.h>
void main()
{

  int k,i;
    printf("enter elements u want to need\n");
    scanf("%d",&k);
    int a[k];
    printf("entet %d elemets\n",k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=1;i<k;i+=2)
      {
          if(a[i]%2!=0)
          printf("%dposition and element is also odd\n",a[i]);
      }
}

