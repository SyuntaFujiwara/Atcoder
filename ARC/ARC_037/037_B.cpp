#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
vector<bool> seen;
bool flag=true;
void dfs(const vector<vector<int>> &G,int v){
    seen[v]=true;

    for(auto next_v: G[v]){
        if(seen[next_v]){
            flag=false;
            break;
        }
        dfs(G,next_v);
    }
}
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    vector<vector<int>> G;
    int u,v;
    rep(i,m){
        cin>>u>>v;
        G[u-1].push_back(v-1);
        G[v-1].push_back(u-1);
    }
    int cnt=0;
    rep(i,n){
        if(seen[i])continue;
        flag=true;
        dfs(G,i);
        if(flag)cnt++;
    }
    cout<<cnt<<endl;



    return 0;
}
