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

    int n,m,c;
    cin>>n>>m>>c;
    int b[m];
    int a[n][m];
    rep(i,m)cin>>b[i];
    rep(i,n){
        rep(j,m){
            cin>>a[i][j];
        }
    }
    int ans=0;
    rep(i,n){
        int cnt=0;
        rep(j,m){
            cnt=cnt+a[i][j]*b[j];
        }
        if(cnt>-c)ans++;
    }
    cout<<ans<<endl;

    return 0;
}