
#include<stdlib.h>
#include<stdio.h>
int *call();
void main()
{
   int *ptr;
   ptr=call();
   printf("%d",*ptr);
}
int *call()
{
    int *call();
    {
        int x=25;
        return &x;
    }
}
