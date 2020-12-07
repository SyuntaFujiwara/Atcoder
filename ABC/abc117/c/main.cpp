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
    vector<ll>x(m);
    rep(i,m)cin>>x[i];
    if(n>m){
        cout<<0<<endl;
        return 0;
    }
    sort(x.begin(),x.end());
    vector<ll>cnt;
    for(int i=1;i<m;i++){
        cnt.push_back(x[i]-x[i-1]);
    }
    sort(cnt.begin(),cnt.end());
    rep(i,n-1){
        cnt.pop_back();
    }
    ll ans=0;
    for(ll a:cnt){
        ans+=a;
    }
    cout<<ans<<endl;

    return 0;
}
