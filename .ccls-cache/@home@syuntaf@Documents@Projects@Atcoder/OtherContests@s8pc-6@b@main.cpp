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

    int n;
    cin>>n;
    vector<pair<ll,ll>>ab(n);
    rep(i,n)cin>>ab[i].first>>ab[i].second;
    vector<ll>t(n);
    rep(i,n)t[i]=ab[i].second-ab[i].first;
    ll ans=1LL<<60;
    for(int i=0;i<n;i++){
        ll enter=ab[i].first;
        for(int j=0;j<n;j++){
            ll sum=0;
            ll exit=ab[j].second;
            for(int k=0;k<n;k++){
                sum+=t[k];
                sum+=abs(enter-ab[k].first);
                sum+=abs(exit-ab[k].second);
            }
            chmin(ans,sum);
        }
    }
    cout<<ans<<endl;

    return 0;
}
