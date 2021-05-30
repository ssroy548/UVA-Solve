#include<stdio.h>
#include<string.h>
int main()
{
	int n,m[20],i,j,max=0;
	char s[20][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        max=0;
        for(j=0;j<10;j++)
        {
            scanf("%s %d",s[j],&m[j]);
            if(m[j]>=max)
            {
                max=m[j];
            }
        }

        printf("Case #%d\n",i+1);

        for(j=0;j<10;j++)
        {
            if(m[j]==max)
                printf("%s\n",s[j]);
        }
	}
	return 0;
}
