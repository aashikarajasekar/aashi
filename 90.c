#include <stdio.h>

int main()
{
    char s[100];int i;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]>=5;i++)
    {
        if((s[i]>='0')&&(s[i]<='9'))
        {
            printf("%c",s[i]);
        }
    }
}
