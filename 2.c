#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=25,b=10,*p,*j;
    p=&a;
    j=&b;
    printf("addition of a + b = %d\n",*p+b);
    printf("Substration of a - b = %d\n",*p-b);
    printf("Multiplication of a * b = %d\n",*p**j);
    printf("Division of a / b = %d\n",*p/ *j);
    printf("Mod of a % b = %d\n",*p%*j);
}+


