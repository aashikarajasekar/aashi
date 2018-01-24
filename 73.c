#include<stdio.h>
int main()
{
    int a=10,b=20;
    int c=15,flag=0;
    if((c>=10)||(c<=20))
    {
        flag=1;
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
