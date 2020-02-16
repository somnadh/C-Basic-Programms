#include <stdio.h>


int main()
{
    int ch,a,b;
    printf("\t\t********************* CALCULATOR**************************\n\n");
    printf("\t\t1.Addition\n");
     printf("\t\t2.Substraction\n");
      printf("\t\t3.Multiplication\n");
       printf("\t\t4.Division\n");
       printf("enter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
        printf("enter any two numbers:");
        scanf("%d%d",&a,&b);
        printf("Addition of %d and %d is  \t:%d",a,b,a+b);
        break;
         case 2:
        printf("enter any two numbers:");
        scanf("%d%d",&a,&b);
        printf("Substraction of %d and %d is  \t:%d",a,b,a-b);
        break;
         case 3:
        printf("enter any two numbers:");
        scanf("%d%d",&a,&b);
        printf("Multiplication of %d and %d is  \t:%d",a,b,a*b);
        break;
         case 4:
        printf("enter any two numbers:");
        scanf("%d%d",&a,&b);
        printf("Division of %d and %d is  \t:%d",a,b,a/b);
        break;

       }

    return 0;
}
