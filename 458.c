#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i,l;
    while(gets(arr)){
        l = strlen(arr);
        for(i=0;i<l;i++)
        {
            printf("%c",arr[i]-7);
        }
    printf("\n");
    }
    return 0;
}
