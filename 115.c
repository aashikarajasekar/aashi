#include<stdio.h>
void main()
{
    int a[20],i,k,j,temp;
    printf("enter the elements");
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
   printf("enter the k ");
   scanf("%d",&k);
   printf("the smallest element in kth position is %d",a[k]);
}
