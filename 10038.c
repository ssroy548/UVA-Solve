#include<stdio.h>

int main()
{
    int arr[100],i,d,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        d=arr[i]-arr[i+1];
        printf("%d\n",d);
    }
    for(i=0;i<n;i++)
    {
        d=arr[i]-arr[i+1];
        printf("%d\n",d);
    }
    return 0;
}
