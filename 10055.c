#include<stdio.h>
int main()
{
    long int a,b,n;
    while (scanf("%d %d",&a,&b)==1){
    if(a>b)
        printf("%ld\n",a-b);
    else
        printf("%ld\n",a+b);
    }

    return 0;
}
