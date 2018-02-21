#include<stdio.h>
#include<string.h>
void main()
{
char s[200];int i;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
  if((i==0)||(s[i]==" "))
  {
if(i==0)
{
s[i]=toupper(s[i]);
printf("%c",s[i]);
}
if (s[i]==" ")
{
s[i+1]=tolower(s[i+1]);
printf("%c",s[i+1]);
}
}

else
printf("%c",s[i]);

}
}
