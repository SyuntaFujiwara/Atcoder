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
    vector<int>v(n);
    vector<int>w(n);
    vector<int>x(n);
    vector<int>y(n);
    vector<int>z(n);
    rep(i,n)cin>>v[i]>>w[i]>>x[i]>>y[i]>>z[i];
    int ans=0;
    rep(i,n){
        if(v[i]+w[i]+x[i]+y[i]+z[i]<20)ans++;
    }
    cout<<ans<<endl;

    return 0;
}

