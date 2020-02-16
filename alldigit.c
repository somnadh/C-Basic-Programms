#include<stdio.h>
void main()
{
    int n,i,rem=0,eq=0,flag=0;
    printf("enter no to check");
    scanf("%d",&n);
    eq=n%10;
    while(n>0)
    {
        rem=n%10;
        if(rem!=eq)
        {
            flag=1;
            break;
        }
        n=n/10;
    }
    if (flag==0){
             printf("all digits are equal");

           }
    else{
         printf("all digits are not equal");
    }

}
