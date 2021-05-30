#include<stdio.h>
int main()
{
    int t,a,b,sum,i,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        sum =a+b;
        if(sum%2!=0)
        {
            printf("impossible\n");
        }
        else if(a<b)
        {
            printf("impossible\n");
        }
        else{
            x = sum/2;
            y = (a-b)/2;
            printf("%d %d\n",x,y);
        }
    }
}
