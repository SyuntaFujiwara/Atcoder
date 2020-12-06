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

    int n,k;
    cin>>n>>k;
    vector<int>l(n);
    rep(i,n)cin>>l[i];
    sort(l.begin(),l.end(),greater<int>());
    int ans=0;
    rep(i,k){
        ans+=l[i];
    }
    cout<<ans<<endl;

    return 0;
}