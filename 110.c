#include<stdio.h>
void main()
{
int a,sum=0,i;
printf("enter the number upto sum");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum=sum+i;
}
printf("the sum of natural numbers is %d",sum);
}
