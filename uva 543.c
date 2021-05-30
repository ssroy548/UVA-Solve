#include<stdio.h>
long long check(long long x)
{
    long long k=0,cr;

    while(x!=0)
    {
        cr = x%10;
        k = k*10 + cr;
        x/= 10;
    }
    return k;
}
int main()
{
    long long int mi,ri=0,tc,i,c;
    scanf("%lld",&tc);

    for(i=0;i<tc;i++){
        scanf("%lld",&mi);
        ri = check(mi);
            c=0;
        while(mi!=ri)
        {
            mi = (mi+ri);
            ri = check(mi);
            c++;
        }
        printf("%lld %lld\n",c,mi);

        }
    return 0;

}
