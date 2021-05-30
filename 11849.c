#include<stdio.h>
int main()
{
    long long unsigned int a,b,i,j,count=0,m=0;
    while(scanf("%llu %llu",&a,&b)&& a!=0&& b!=0){
        int jack[a],jill[b];
        for(i=0;i<a;i++){
            scanf("%d",&jack[i]);
        }
        for(j=0;j<b;j++){
            scanf("%d",&jill[j]);
        }
        count =0;
        m =0;
        for(i=0;i<a;i++){
            for(j=m;j<b;j++){
                if(jack[i]==jill[j]){
                    count++;
                    m= j+1;
                    break;
                }
                if(jill[j]>jack[i]){
                    break;
                }
                if(jill[j]<jack[i]){
                    m=j+1;
                }
            }
        }
        printf("%d\n",count);
    }
     return 0;
}
