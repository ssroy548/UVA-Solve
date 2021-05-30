#include<stdio.h>
int main()
{
    long long int a, i=0;
    while(scanf("%lld",&a)!=EOF)
    {
        if(i>0){printf("\n");}
        if((a%4==0 && (a%100)!=0)||a%400==0){
            printf("This is leap year.\n");
            if(a%15==0){
            printf("This is huluculu festival year.\n");}
            if(a%55==0){printf("This is bulukulu festival year.\n");}
        }
        else if(a%15==0){ printf("This is huluculu festival year.\n"); }
        else{ printf("This is an ordinary year.\n");}
        i++;
    }
    return 0;
}
