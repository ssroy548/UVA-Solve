#include<bits/stdc++.h>
//using namespace std;

int main()
{
    int tc;
    std::cin>>tc;
    for(int i=0;i<tc;i++)
    {
        std::string s;

        std::cin>>s;
        int k;
        std::cin>>k;
        while(k--)
        {
            std::string str;
            std::cin>>str;
            int l = s.find(str);
            if(l>=0)
                printf("y\n");
            else
                printf("n\n");
        }
    }
    return 0;
}
