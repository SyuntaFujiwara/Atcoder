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

    ll n,k;
    cin>>n>>k;
    k=abs(k);
    ll ans=0;
    for(ll i=2;i<=2*n;i++){
        if(min(i-1,2*n+1-i)*min((i-k)-1,2*n+1-(i-k))>0){
            ans+=(min(i-1,2*n+1-i)*min((i-k)-1,2*n+1-(i-k)));
        }
    }
    cout<<ans<<endl;

    return 0;
}