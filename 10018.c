#include<stdio.h>
int reverse (int num)
{
    int r,sum=0,temp;
    for(temp=num;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum*10+r;
    }
    return sum;
}
int main()
{
    int n,i,j,a,ch;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=0; ; j++)
        {
            ch=reverse(a);
            if(ch==a)
                break;
            a=a+ch;
        }
        printf("%d %d\n",j,ch);
    }
    return 0;
}
