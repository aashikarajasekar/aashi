#include<stdio.h>
void main()
{
    int a,count=0;
    printf("enter the digit");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("the no of digit is %d",count);
}

