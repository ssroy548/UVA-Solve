#include<stdio.h>
int sum(int n)
{
    int digit,res=0;
    while(n!=0){
        digit=n%10;
        res=res+digit;
        n=n/10;
    }
    return res;
}
int main()
{
    int a,b,c,d;
    while(scanf("%d",&a)!=EOF){
    if(a==0)
    break;
    b=sum(a);
    c=sum(b);
    d=sum(c);
    printf("%d\n",d);
    }
    return 0;
}
