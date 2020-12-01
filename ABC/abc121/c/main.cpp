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

    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>p(n);
    rep(i,n)cin>>p[i].first>>p[i].second;
    sort(p.begin(),p.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(min(m,p[i].second)*p[i].first);
        m-=min(m,p[i].second);
    }
    cout<<ans<<endl;

    return 0;
}