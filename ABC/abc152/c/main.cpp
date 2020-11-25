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
    vector<int>p(n);
    rep(i,n)cin>>p[i];
    int ans=0;
    int min_p=1e9;
    for(int i=0;i<n;i++){
        if(p[i]<=min_p)ans++;
        chmin(min_p,p[i]);
    }
    cout<<ans<<endl;

    return 0;
}