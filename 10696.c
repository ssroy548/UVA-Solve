#include<stdio.h>
int f91(int x)
{
    if(x<=100){
        x = f91(f91(x + 11));}
    if(x>=101)
    {
        x= x- 10;
    }
    return x;
}
int main()
{
    int a;
    while(scanf("%d",&a)&&a!=0)
    {
        printf("f91(%d) = ",a);
        a=f91(a);
        printf("%d\n",a);
    }
    return 0;
}
