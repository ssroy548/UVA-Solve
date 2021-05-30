#include<stdio.h>
int fu(long long int z)
{
    int c=1;
    while(z!=1){
        if(z%2==0) z=z/2;
        else z=z*3+1;
        c++;}
        return c;
}
int main()
{
    long long n,i,j,x,y,a,max;
    while(scanf("%lld %lld",&i,&j)==2){
    if(i<j){
        x=i;
        y=j;
    }
    else{
        x=j;
        y=i;
    }
    max=1;
    for(n=x;n<=y;n++){
        a=fu(n);
        if(a>max)
            max=a;
    }
    printf("%lld %lld %lld\n",i,j,max);
    }
    return 0;
}
