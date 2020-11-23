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
    vector<int>b(n);
    rep(i,n-1)cin>>b[i];
    b[n-1]=1e9;
    ll ans=b[0];
    for(int i=1;i<n;i++){
        if(i!=n){
            ans+=min(b[i-1],b[i]);
        }
    }
    cout<<ans<<endl;

    return 0;
}