#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
#define MOD 1000000007;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll ans=0;
    vector<ll>sum(n+1);
    sum[0]=0;
    for(int i=1;i<n+1;i++){
        sum[i]=a[i-1]+sum[i-1];
        sum[i]%=MOD;
    }
    for(int i=0;i<n-1;i++){
        ans+=a[i]*(sum[n]-sum[i+1]);
        ans%=MOD;
    }
    ans+=MOD;
    ans%=MOD;
    cout<<ans<<endl;

    return 0;
}
