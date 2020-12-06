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

    int n,m,l;
    cin>>n>>m>>l;
    int p,q,r;
    cin>>p>>q>>r;
    int ans=0;
    chmax(ans,(n/p)*(m/q)*(l/r));
    chmax(ans,(n/p)*(m/r)*(l/q));
    chmax(ans,(n/q)*(m/p)*(l/r));
    chmax(ans,(n/q)*(m/r)*(l/p));
    chmax(ans,(n/r)*(m/p)*(l/q));
    chmax(ans,(n/r)*(m/q)*(l/p));
    cout<<ans<<endl;

    return 0;
}