#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
char c;
void *ptr;
i=12;
c='s';
ptr=&i;
printf("ptr points to integer type i:e=>%d\n",*(int*)ptr);
ptr=&c;
printf("ptr points to character type i:e=>%c\n",*(char*)ptr);
}

//its  a pointer which can be assigned to any type of data.....
