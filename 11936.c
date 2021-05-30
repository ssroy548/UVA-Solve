#include <stdio.h>
int main()
{
    int a, b, c, g, m, s, temp,t,i;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
    scanf("%d %d %d", &a, &b, &c);
    g = a;
    m = b;
    s = c;
    if (g < m)
    {
        temp = g;
        g = m;
        m = temp;
    }
    if (m < s)
    {
        temp = m;
        m = s;
        s = temp;
    }
    if (g < m)
    {
        temp = g;
        g = m;
        m = temp;
    }
    if(s+m>g)
        printf("OK\n");
    else
        printf("Wrong!!\n");
    }
    return 0;
}
