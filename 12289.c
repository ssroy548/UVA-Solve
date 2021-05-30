#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c=0;
    char num[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&num);
        if(strlen(num)==5)
            printf("3\n");
        else
        {
            c=0;
           if(num[0]== 'o')
            c++;
           if(num[1] == 'n')
            c++;
           if(num[2] == 'e')
            c++;
            if(c>=2)
            printf("1\n");
        else
            printf("2\n");
    }
    }
    return 0;
}
