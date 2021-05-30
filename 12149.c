#include<stdio.h>
int main()
{
    int a,i,t,c=0;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        c=0;
        for(i=1;i<=a;i++)
        {
            t=i*i;
            c=c+t;
        }
        printf("%d\n",c);
    }
    return 0;
}
