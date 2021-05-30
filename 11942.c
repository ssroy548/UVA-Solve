#include<stdio.h>
int main()
{
    int ar[10],n,i,j,count,c;
    scanf("%d",&n);
    freopen("out.txt","w",stdout);
    printf("Lumberjacks:\n");

    for(i=0;i<n;i++)
    {
        count=0;c=0;
        for(j=0;j<10;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j=0;j<=8;j++){
                if(ar[j]>=ar[j+1])
                    count++;
                else
                    break;
        }
        if(count==9){
            printf("Ordered\n");
            continue;
        }
        for(j=0;j<=8;j++){
            if(ar[j]<=ar[j+1])
                c++;
            else
                break;
        }
        if(c==9){
            printf("Ordered\n");
            continue;
        }

        printf("Unordered\n");
    }
    return 0;
}
