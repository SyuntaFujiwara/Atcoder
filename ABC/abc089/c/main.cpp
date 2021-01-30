#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
uintmax_t combination(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    vector<ll>cnt(5);
    rep(i,n){
        if(s[i][0]=='M')cnt[0]++;
        if(s[i][0]=='A')cnt[1]++;
        if(s[i][0]=='R')cnt[2]++;
        if(s[i][0]=='C')cnt[3]++;
        if(s[i][0]=='H')cnt[4]++;
    }
    ll ans=0;
    for(int i=0;i<=3;i++){
        for(int j=i+1;j<=3;j++){
            for(int k=j+1;k<=4;k++){
                ans+=1LL*cnt[i]*cnt[j]*cnt[k];
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}

