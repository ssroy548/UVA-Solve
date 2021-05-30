#include<stdio.h>
int main()
{
    int i,n,sum=0,c,t=0,j,max=0,x;

    for(x=1;;x++){
            scanf("%d",&n);
    if(n==0) break;
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
        if(ar[i]>max)
            max = ar[i];
    }
    c=sum/n;
    for(j=0;j<max;j++){
        for(i=0;i<n;i++)
        {
            if(ar[i]>c){
                ar[i]--;
                t++;
            }
            else continue;
        }
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",x,t);
    t=0;
    sum=0;
    c=0;
    max=0;
    }
    return 0;
}

