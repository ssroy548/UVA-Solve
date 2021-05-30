#include<stdio.h>
int main()
{
    float f,c,i;
    int n;
    scanf("%f",&i);
    for(n=1;n<=i;n++)
    {
        scanf("%f%f",&c,&f);
        f=9*c/5+f;
        c=f*5/9;
        printf("Case %d: %.2f\n",n,c);
    }
    return 0;
}
