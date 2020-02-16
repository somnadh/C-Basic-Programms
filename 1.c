#include <stdio.h>
#include <stdlib.h>

int main()
{
   int count=7;
   int *countptr=&count;
   printf("%d\n",*countptr);
   printf("%d\n",count);
   printf("%d\n",&countptr);
   printf("%d\n",&count);
}

