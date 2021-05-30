#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[1000];
    int i,x,sum,s,r,k;
    double c,l,f;
    while(scanf("%s",str))
    {
        if(str[0]=='0'){
            return 0;
        }

        l= strlen(str);
        sum = 0,s=0,f=1;
        for(i=0;i<l;i++)
        {
            x = str[i]-48;
            sum = sum + x;
        }
        if(sum%9==0){
            f=0;
        }
        k=1;
        while(sum!=9&&sum>9)
        {r=0;

            while(sum!=0)
            {
             r+=sum%10;
             sum=sum/10;
            }
            sum=r;

        k++;
        }
        if(f==0){
            printf("%s is a multiple of 9 and has 9-degree %d.\n",str,k);
        }
        else if(f==1){
            printf("%s is not a multiple of 9.\n",str);
        }
    }
    return 0;
}
