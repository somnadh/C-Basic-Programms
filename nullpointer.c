
#include <stdio.h>
#include <stdlib.h>
int *i;
int main()
{

    *i=100;
    printf("rogue pointer =>%d\n",i);
    i=&c;
    printf("if i assign i:e=>%d\n",i);
}
