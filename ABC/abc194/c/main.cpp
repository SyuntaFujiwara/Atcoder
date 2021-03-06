#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    ll n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(pow(a[i],2)*(n-1));
    }
    vector<ll>sum(n+1);
    sum[n]=0;
    for(int i=n-1;i>=0;i--){
        sum[i]=sum[i+1]+a[i];
    }
    for(int i=0;i<n;i++){
        ans-=(2*a[i]*sum[i+1]);
    }
    cout<<ans<<endl;

    return 0;
}

