#include<stdio.h>
void main()
{
int a[20],b,i,j,temp;
printf("enter the array of elemets");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
for(j=i+1;j<=5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("the soretd elements are");
for(i=0;i<=5;i++)
{
printf(" %d",a[i]);
}
printf("the minimum element is %d",a[0]);
}
