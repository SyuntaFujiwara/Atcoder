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

    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n);
    rep(i,n+1)cin>>a[i];
    rep(i,n)cin>>b[i];
    ll ans=0;
    rep(i,n){
        ans+=min(a[i],b[i]);
        b[i]-=min(a[i],b[i]);
        ans+=min(a[i+1],b[i]);
        a[i+1]-=min(a[i+1],b[i]);
    }
    cout<<ans<<endl;

    return 0;
}