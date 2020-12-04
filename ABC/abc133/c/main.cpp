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

    ll l,r;
    cin>>l>>r;
    ll ans=2025;
    for(ll i=l;i<=min(r,l+2020);i++){
        for(ll j=i+1;j<=min(r,i+2020);j++){
            ll mod=(i*j)%2019;
            chmin(ans,mod);
        }
    }
    cout<<ans<<endl;

    return 0;
}
