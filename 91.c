#include <stdio.h>

void main()
{
   
int a,b,c,area,volume;
printf("enter the length");
scanf("%d",&a);
printf("enter the breadth");
scanf("%d",&b);
printf("enter the height");
scanf("%d",&c);
volume=a*b*c;
printf("volume is%d",volume);
area=(2*a*b)+(2*b*c)+(2*c*a);
printf("the area is %d",area);

}
