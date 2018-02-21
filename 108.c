#include<stdio.h>
void main()
{
int a,d,n;
printf("%d%d%d",&a,&d,&n);
d=(n-1)*d;
a=a+d;
printf("%d",a);
}
