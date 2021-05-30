#include<bits/stdc++.h>
using namespace std;

int parent[26];
int rankParent[26];


void initializeSet(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        parent[i] = i;
        rankParent[i] = 0;
    }
}

int findParent(int x)
{
    if(x != parent[x])
        return parent[x] = findParent(parent[x]);
    else
        return x;
}

void unionSet(int x, int y)
{
    int px = findParent(x);
    int py = findParent(y);
    if(px == py) return;

    if(rankParent[px] < rankParent[py])
        parent[px] = py;
    else if(rankParent[px] > rankParent[py])
        parent[py] = px;
    else
    {
        parent[py] = px;
        rankParent[px]++;
    }


}

int main(){
    int T,n,x,y,ans;
    char c;
    string s;

    scanf("%d\n\n",&T);

    for(int tc=1;tc<=T;tc++){
        getline(cin,s);
        n=s[0]-'A'+1;

        ans=n;
        for(int i=0;i<n;i++) initializeSet(i);

        while(1){
            if(!getline(cin,s) || s.empty()) break;

            x=s[0]-'A'; y=s[1]-'A';

            if(findParent(x)!=findParent(y)){
                unionSet(x,y);
                ans--;
            }
        }

        if(tc!=1) printf("\n");
        printf("%d\n",ans);
    }

    return 0;
}
