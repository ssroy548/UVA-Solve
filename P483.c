#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],l,i;
    while(scanf("%s",str)==1){

        l=strlen(str);
        for(i=l-1;i>=0;i--)
        {
            printf("%c",str[i]);

        }
        printf(" ");
    }
    return 0;
}
