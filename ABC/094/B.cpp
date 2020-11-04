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

    int n,m,x;
    cin>>n>>m>>x;
    vector<int>a(n);
    rep(i,m)cin>>a[i];
    int gn=0;
    int g0=0;
    for(int i=x;i<n;i++){
        rep(j,m){
            if(i==a[j]){
                gn++;
            }
        }
    }
    for(int i=x;i>=0;i--){
        rep(j,m){
            if(i==a[j]){
                g0++;
            }
        }
    }
    cout<<min(g0,gn)<<endl;

    return 0;
}