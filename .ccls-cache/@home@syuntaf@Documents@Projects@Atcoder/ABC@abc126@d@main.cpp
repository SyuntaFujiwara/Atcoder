#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
vector<vector<pair<int,int>>>g;
vector<int>ans;
void dfs(int a,int b){
    for(auto x: g[a]){
        int next=x.first;
        int w=x.second;
        if(ans[next]!=-1)continue;
        ans[next]=b^w;
        dfs(next,b^w);
    }
    return;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int N;
    cin>>N;
    g.resize(N);
    int u,v,w;
    rep(i,N-1){
        cin>>u>>v>>w;
        u--;v--;
        w%=2;
        g[u].emplace_back(v,w);
        g[v].emplace_back(u,w);
    }
    ans.resize(N,-1);
    ans[0]=0;
    dfs(0,0);
    rep(i,N){
        cout<<ans[i]<<endl;
    }

    return 0;
}

