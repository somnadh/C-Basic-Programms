rogue pointers are point to unassigned memoey
//if we try to access rogue pointsrs we will be writing to unassfined memory
#include<stdio.h>
void main()
{
int *a;
int b[100];
a=b;
printf("%d",a);
}+
