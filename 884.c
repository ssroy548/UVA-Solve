#include<stdio.h>
int main()
{
    long long a=1,n=0,i,s;
    scanf("%lld",&s);
    for(i=1;i<=s;i++)
    {
        a=a*i;
    }
    printf("%lld\n",a);
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            n++;
        }
        else if(a%3==0)
        {
            a=a/3;
            n++;
        }
        if(a%5==0)
        {
            a= a/5;
            n++;
        }
    }
    printf("%lld\n",n);
    return 0;
}
