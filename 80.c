#include<stdio.h>
void main()
{
int n=12234;
while(n!=0)
{
n=n%10;
if(n%2!=0)
{
printf("%d",&n);
}
}
}
