#include<stdio.h>
void main(){
int n,sum=0,rem=0,temp,i,fact;
printf("enter any umber to check Strong or Not");
scanf("%d",&n);
temp=n;

while(n>0)
{
    fact=1;
    rem=n%10;
    for(i=1;i<=rem;i++)
        fact=fact*i;
    sum=sum+fact;
    n=n/10;
}
if(sum==temp)
{
    printf("strong number");
}
else{
    printf("Not Stron Number");
}}
