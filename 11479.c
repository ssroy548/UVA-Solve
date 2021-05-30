#include<stdio.h>
int main()
{
    long int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld %ld %ld",&a, &b, &c);
        if(a+c<=b || a+b<=c || c+b<=a){
            printf("Case %ld: Invalid\n",i);
            continue;
        }
        if(a==b&&b==c&&a==c){
            printf("Case %ld: Equilateral\n",i);
            continue;
        }
        if(a==b||b==c||a==c){
            printf("Case %ld: Isosceles\n",i);
            continue;
        }
        else
            printf("Case %ld: Scalene\n",i);
    }
    return 0;
}
