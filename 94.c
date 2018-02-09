#include <stdio.h>

void main()
{ 
    int n,k,a[20],i;
    printf("enter the numbers of elements");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position to find its element");
    scanf("%d",&k);
    printf("the element is %d",a[k]);
}
