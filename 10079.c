#include<stdio.h>
int main()
{
    long long n,i,sum;
    while(scanf("%lld",&n)&&n>-1)
    {
        if(n==0){
            printf("1\n");
            continue;
        }
        sum=1;
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
