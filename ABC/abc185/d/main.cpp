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
    rep(i,m)cin>>a[i];
    sort(a.begin(),a.end());
    a.insert(a.begin(),0);
    a.push_back(n+1);
    vector<int>v;
    int k=n;
    for(int i=1;i<m+2;i++){
        if(a[i]-a[i-1]-1>0){
            v.push_back(a[i]-a[i-1]-1);
            chmin(k,a[i]-a[i-1]-1);
        }
    }
    ll ans=0;
    for(int i=0;i<v.size();i++){
        ans+=((v[i]+k-1)/k);
    }
    cout<<ans<<endl;

    return 0;
}