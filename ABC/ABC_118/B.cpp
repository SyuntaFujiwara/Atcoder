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
    vector<int>k(n);
    vector<vector<int>> a(30,vector<int>(30));
    rep(i,n){
        cin>>k.at(i);
        rep(j,k[i]){
            cin>>a.at(i).at(j);
        }
    }
    vector<int>cnt(m,0);
    rep(i,n){
        rep(j,k[i]){
            cnt[a[i][j]-1]++;
        }
    }
    int ans=0;
    rep(i,m){
        if(cnt[i]==n)ans++;
    }
    cout<<ans<<endl;

    return 0;
}