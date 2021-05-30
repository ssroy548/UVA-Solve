#include<stdio.h>
int main()
{
    long long n,x=0,k=0,m=0;

    while(scanf("%lld",&n)!=EOF){
            k = n/2+1;
            m = k*k;
            x=  2*m - 3;
            printf("%lld\n",x*3);
            k=0,m=0,x=0;
    }
    return 0;
}
