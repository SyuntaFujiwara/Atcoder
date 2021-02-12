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
    rep(i,n)cin>>a[i];
    vector<ll>sum(n);
    sum[0]=a[0];
    for(int i=1;i<n;i++)sum[i]=sum[i-1]+a[i];
    ll l_sum,r_sum;
    ll ans;
    rep(i,n){
        if(sum[i]>=sum[n-1]/2){
            l_sum=sum[i];
            r_sum=sum[n-1]-l_sum;
            ans=l_sum-r_sum;
            chmin(ans,sum[n-1]-sum[i-1]-sum[i-1]);
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

