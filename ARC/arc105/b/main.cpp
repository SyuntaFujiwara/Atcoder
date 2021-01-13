#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
long long gcd(long long a,long long b){
    if (b==0){
        return(a);
    }
    else{
        return(gcd(b,a%b));
    }
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll ans=0;
    rep(i,n){
        ans=gcd(a[i],ans);
    }
    cout<<ans<<endl;

    return 0;
}
