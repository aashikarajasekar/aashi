#include<stdio.h>
void main()
{
int n,a,b=1;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
b=b*a;
n=n/10;
}
printf("%d",b);
}
