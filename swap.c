#include<stdio.h>
void main()
{
int a=26,b=36,temp;
int sum=0,flag=0;
if(a<0)
{
a=a%26;
a=a/10;
sum=sum+a;
}
if(b<0)
{
b=b%36;
b=b/10;
flag=flag+b;
}
temp=sum;
sum=flag;
flag=temp;
printf("%d%d",sum,flag);
}
