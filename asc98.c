#include<stdio.h>
void main()
{
int n[20],k,count=0i,j,temp;
printf("enter the number");
for(i=0;i<6;i++)
{
scanf("%d",&n[i]);
}
printf("enter the number upto which arranged in ascending order");
scanf("%d",&k)
for(i=0;i<=k;i++)
{
for(j=i+1;j<=k;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
count++;
}
}
}
printf("%d",count);
}
