#include<stdio.h>
void main()
{
  char s[100];int i;
  printf("enter the character");
  scanf("%c",&s);
  for(i=0;s[i]!='\0';i++)
  {
      if(i%2==0)
     printf("%c",s[i]);
     else
      printf("%c",s[i]);
     
  }
}
