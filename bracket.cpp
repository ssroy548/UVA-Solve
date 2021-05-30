#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    stack<char> mystack;
    char str[100];
    int i,n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
            int e=0;
    gets(str);
    getchar();
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        else if(strlen(str)==1)
        {
            e=1;
            break;
        }

        if(str[i]=='('|| str[i]=='[')
        {
            mystack.push(str[i]);
        }
        else if(!mystack.empty()&&str[i]== ']'&& mystack.top()== '[')
        {
            mystack.pop();
        }
        else if(!mystack.empty()&&str[i] == ')' && mystack.top()== '(')
        {
            mystack.pop();
        }
        else
        {
            e=1;
            break;
        }
    }
    if(e==0&&mystack.empty())
    {
         cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    while(!mystack.empty())
    {
        mystack.pop();
    }
    }
    return 0;
}
