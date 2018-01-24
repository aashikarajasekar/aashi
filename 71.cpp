#include<iostream>
using namespace std;
int main()
{
char s[10]="alla";int str,len,flag,i;
str=str.size(s);
len=str-1;
for(i=0;i<='/';i++)
{
    if(s[0]==s[len])
    {
        flag=1;
    }
    
}
    if(flag==1)
    {
        cout<<"its palindrome";
        
    }
    else
    {
        cout<<  "its notpalindrome";
    }
    return 0;
}
