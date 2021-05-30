#include<stdio.h>
int main()
{
    int a,b,k=1,t,sum,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
                sum=sum+i;
            else
                continue;
        }
        printf("Case %d: %d\n",k,sum);
        k++;
    }
    return 0;
}
