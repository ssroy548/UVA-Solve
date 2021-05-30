#include<stdio.h>
int main()
{
    int n,l,w,h,i;
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
        scanf("%d %d %d",&l,&w,&h);
        if(l<21&&w<21&&h<21)
            printf("Case %d: good\n",n);
        else
            printf("Case %d: bad\n",n);
    }
    return 0;
}
