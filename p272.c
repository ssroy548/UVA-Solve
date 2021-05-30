#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    long int i,l,count=0;
    while(gets(str))
    {
        l=strlen(str);
        for(i=0;i<l;i++){
            if(str[i]=='"'){
                count++;
            if(count%2==1)
                printf("``");
            else
                printf("''");}
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}

