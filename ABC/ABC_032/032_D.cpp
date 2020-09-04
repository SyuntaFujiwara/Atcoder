#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,W;
    cin>>n>>W;
    pair<int,int> p[n];
    int v,w;
    rep(i,n){
        cin>>v>>w;
        p[i]=make_pair(v,w);
    }
    vector<int>dp(W+5,0);
    for(int i=W;i>=0;i--){
        rep(j,n){
            if(ll(i)-p[j].second>=0){
                dp[i-p[j].second]=max(dp[i-p[j].second],dp[i]+p[j].first);
            }
        }
    }
        cout<<dp[0]<<endl;

    return 0;
}
