#include<stdio.h>
int main()
{
    int count=0,i,j,m,n,test,b,l;
    scanf("%d",&test);
    for(l=1;l<=test;l++){
        scanf("%d",&m);
        scanf("%d",&n);
    for(b=1;b<=n;b++)
        {
            count=0;
    for(i=1;i<=m;i++)
    {
            count++;
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
        }
    printf("\n");
    }
    for(i=i-2;i>=1;i--)
    {
        count--;
        for(j=i;j>=1;j--)
        {
            printf("%d",count);
        }
        if(b==n&&l==test&&i==1)
            break;
        printf("\n");
    }
    printf("\n");
    }
    }
    return 0;
}
