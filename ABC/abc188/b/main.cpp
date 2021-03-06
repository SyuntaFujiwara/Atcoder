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

    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    ll sum=0;
    rep(i,n){
        sum+=(a[i]*b[i]);
    }
    if(!sum)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
