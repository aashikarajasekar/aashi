#include<stdio.h>
void main()
{
    int a[20],i,k;
    printf("enter the elements");
    for(i=0;i<=5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the k element to check");
    scanf("%d",&k);
    if(a[k]%2!=0)
    {
        printf("the odd no is %d",a[k]);
    }
    else
    {
        printf("kposition isnt a oddnumber %d",a[k]);
    }
}

