#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    rep(i,n){
        rep(j,m)cin>>a[i][j];
    }
    ll ans=0;
    rep(i,m){
        for(int j=i+1;j<m;j++){
            ll cnt=0;
            rep(k,n){
                cnt+=max(a[k][i],a[k][j]);
            }
            chmax(ans,cnt);
        }
    }
    cout<<ans<<endl;

    return 0;
}
