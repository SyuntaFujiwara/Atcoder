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
    int t,a;
    cin>>t>>a;
    int h[n];
    rep(i,n)cin>>h[i];
    int ans;
    double min_dif=1e+9;
    rep(i,n){
        if(min_dif>abs((t-h[i]*0.006)-a))ans=i+1;
        chmin(min_dif,abs((t-h[i]*0.006)-a));
    }
    cout<<ans<<endl;

    return 0;
}