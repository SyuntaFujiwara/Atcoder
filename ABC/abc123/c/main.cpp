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

    ll n,a,b,c,d,e;
    cin>>n>>a>>b>>c>>d>>e;
    ll ans=0;
    chmax(ans,(n+a-1)/a);
    chmax(ans,(n+b-1)/b);
    chmax(ans,(n+c-1)/c);
    chmax(ans,(n+d-1)/d);
    chmax(ans,(n+e-1)/e);
    ans+=4;
    cout<<ans<<endl;

    return 0;
}

