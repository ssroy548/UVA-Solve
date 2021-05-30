#include<stdio.h>
int main()
{
    int a,b,n,i,max;
    while(scanf("%d %d",&a,&b)==2)
    {
        max=0;
        if(a== -1 && b == -1) break;

        else{
            if(a<=50&&b<=50)
            {
                if(a>b)
                    max=a-b;
                else
                    max=b-a;
            }
            else if(a>50&&b>50){
                if(a>b)
                    max=a-b;
                else
                    max=b-a;
            }
        }
        printf("%d\n",max);
    }
}
