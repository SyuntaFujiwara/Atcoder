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
    vector<ll>a(n);
    vector<ll>b(n);
    rep(i,n)cin>>a[i]>>b[i];
    unsigned long long ans=0;
    for(int i=0;i<n;i++){
        ll n=((b[i]-a[i]+1)*(a[i]+b[i]))/2;
        ans+=n;
    }
    cout<<ans<<endl;


    return 0;
}