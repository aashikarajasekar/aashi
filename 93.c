#include <stdio.h>

void main()
{ 
    float a;
    printf("enter the temperature in celsius");
    scanf("%f",&a);
    a=a+273.15;
    printf("the temperature in kelvin %f",a);
}
