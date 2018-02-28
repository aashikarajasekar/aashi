#include<stdio.h>
void main()
{
    int a[20],i,count=0,k;
    printf("enter the elements");
    for(i=0;i<=5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the k element to check");
    scanf("%d",&k);
    for(i=0;i<=5;i++)
    {
       if(k==a[i])
       {
           count++;
       }
    }
    printf("no of repetitions are  %d",count);
}

