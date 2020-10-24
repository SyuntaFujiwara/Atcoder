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
    int l[m],r[m];
    rep(i,m){
        cin>>l[i]>>r[i];
    }
    int max_l=-1,min_r=1e+9;
    rep(i,m){
        chmax(max_l,l[i]);
        chmin(min_r,r[i]);
    }
    int ans=min_r-max_l+1;
    if(ans<0)cout<<0<<endl;
    else cout<<ans<<endl;

    return 0;
}
