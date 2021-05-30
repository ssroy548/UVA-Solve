#include<stdio.h>

int main()
{
    int n,i,t=0,in=0;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[0] == 'd'){
            scanf("%d",&in);
        t = t+in;}
        else
            printf("%d\n",t);

    }
    return 0;

}
