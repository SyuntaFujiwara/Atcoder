#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin>>n;
    ll ans;
    ans=modpow(10, n, 1000000007)-2*modpow(9, n, 1000000007)+modpow(8, n, 1000000007)+1000000007;
    if(ans>=1000000007){
        ans=ans%1000000007;
    }
    cout<<ans<<endl;

    return 0;
}