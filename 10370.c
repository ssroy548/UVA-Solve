#include<stdio.h>
int main()
{
    double b,n,k=0,j;
    int a,i,x,t,sum = 0;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0,k=0,b=0,j=0;
        scanf("%d",&a);
        int arr[a];
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            sum = sum+ arr[i];
        }
        b= sum / a;
        for(x=0;x<a;x++)
        {
            if(arr[x]>b)
                k++;
        }
        j= (k/a)*100;
        printf("%.3lf%%\n",j);
    }
    return 0;
}
