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
    vector<int>a(n);
    vector<int>p(n);
    vector<int>x(n);
    rep(i,n)cin>>a[i]>>p[i]>>x[i];
    int ans=1e9;
    rep(i,n){
        if(a[i]<x[i]){
            chmin(ans,p[i]);
        }
    }
    if(ans==1e9)cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}

