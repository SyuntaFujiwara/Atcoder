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

    int h,w;
    cin>>h>>w;
    vector<vector<int>>a(h,vector<int>(w));
    rep(i,h){
        rep(j,w)cin>>a[i][j];
    }
    int min_a=1e9;
    int ans=0;
    rep(i,h){
        rep(j,w){
            chmin(min_a,a[i][j]);
        }
    }
    rep(i,h){
        rep(j,w){
            ans+=(a[i][j]-min_a);
        }
    }
    cout<<ans<<endl;

    return 0;
}