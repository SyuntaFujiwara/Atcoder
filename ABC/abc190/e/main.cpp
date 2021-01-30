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
    vector<int>a(m);
    vector<int>b(m);
    rep(i,m)cin>>a[i]>>b[i];
    int k;
    cin>>k;
    vector<int>c(k);
    rep(i,k)cin>>c[i];


    return 0;
}

