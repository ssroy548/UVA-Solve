#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,i;
    printf("PERFECTION OUTPUT\n");

    while(1){
        scanf("%d",&n);
        sum=0;
        if(n==0){
            cout<<"END OF OUTPUT\n";
            break;
        }
        else{
            for(i=1;i<=n/2;i++){
                if(n%i==0){
                    sum=sum+i;
                }
            }
         if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(n<sum) printf("%5d  ABUNDANT\n",n);
        else if(n>sum) printf("%5d  DEFICIENT\n",n);
        }
    }
    return 0;
}
