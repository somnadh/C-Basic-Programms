#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter 10 elements");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("the alternative numbers are");
    for(i=0;i<10;i=i+2){
        printf("%d\t",a[i]);
    }



}
