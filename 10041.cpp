#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return(*(int*)a - *(int*)b);
}
int main()
{
    int n,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n],sum=0,d,j;
        for(i=0; i< n; i++)
        {
            scanf("%d",&arr[i]);
        }
        qsort(arr, n, sizeof(int),cmpfunc);
        for(i=n-1,j=0;i>=n/2;i--,j++)
        {
            d= arr[i] - arr[j];
            sum = sum+d;
        }
        printf("%d\n",sum);
    }
    return 0;
}
