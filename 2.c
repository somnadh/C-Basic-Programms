#include <stdio.h>

int main()
{
  int n, c, k, space = 1;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  space = n - 1;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space--;

    for (c = 1; c <= 2*k-1; c++)
      printf("%d",c);

    printf("\n");
  }

  space = 1;

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space++;

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("%d",c);

    printf("\n");
  }

  return 0;
}

OUTPUT:
Enter number of rows
5
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
