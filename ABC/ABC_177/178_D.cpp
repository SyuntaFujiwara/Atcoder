#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    int a,b;
    int g[n][n]={};
    rep(i,m){
        cin>>a>>b;
        a--;
        b--;
        g[a][b]=1;
        g[b][a]=1;
    }
    int max_c=-1;
    rep(i,n){
        int cnt=1;
        rep(j,n){
            if(g[i][j]==1)cnt++;
        }
        max_c=max(max_c,cnt);
    }
    cout<<max_c<<endl;


    return 0;
}
