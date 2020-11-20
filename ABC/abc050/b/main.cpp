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
    vector<int>t(n);
    rep(i,n)cin>>t[i];
    int m;
    cin>>m;
    vector<int>p(m);
    vector<int>x(m);
    rep(i,m)cin>>p[i]>>x[i];
    ll sum=0;
    rep(i,n){
        sum+=t[i];
    }
    rep(i,m){
        cout<<sum-(t[p[i]-1]-x[i])<<endl;
    }

    return 0;
}