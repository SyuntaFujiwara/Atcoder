#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
bool seen[105];
bool flag=true;
vector<vector<int>> G;
void dfs(int v,int prev){
    seen[v]=true;

    for(int next_v:G[v]){
        if(next_v==prev)continue;
        if(seen[next_v]){
            flag=false;
            break;
        }
        dfs(next_v,v);
    }
}
int main(int argc, const char * argv[]) {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    G.resize(n);
    int u,v;
    rep(i,m){
        cin>>u>>v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int cnt=0;
    rep(i,n){
        if(seen[i])continue;
        flag=true;
        dfs(i,-1);
        if(flag)cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
