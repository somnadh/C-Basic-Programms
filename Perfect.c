#include<stdio.h>
main()
{
    int i=1,sum,j,x;

    printf("enter a range");
    scanf("%d",&x);
    for(j=1;j<=x;j++)
        {
            sum=0;
            i=1;
            while(i<j)
            {
                if(j%i==0)
                sum=sum+i;
                i++;
            }
            if(sum==j)
             {
                printf("%d  is perfect\n",j);
            }

    }



}

