#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char str1[100];
    gets(str1);
    int l,i,k,j;
    l=strlen(str1);
    for(i=0;i<l;i++)
    {
        for(j=0;j<strlen(str);j++)
        {
            if(str1[i]==str[j])
            {
                printf("%c",str[j]-1);
                break;
            }
        }
    }
    return 0;
}
