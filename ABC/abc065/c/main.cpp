#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll MOD=1000000007;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    ll n,m;
    cin>>n>>m;
    if(m-n>1||n-m>1){
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    for(ll i=1;i<=min(n,m);i++){
        ans*=i;
        ans=ans%MOD;
    }
    ans=ans*ans;
    ans%=MOD;
    if(n!=m)ans*=max(n,m);
    else ans*=2;
    ans=ans%MOD;
    cout<<ans<<endl;

    return 0;
}

