#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=-1000000000000000009;
    ans=max(ans,b*c);
    ans=max(ans,a*c);
    ans=max(ans,a*d);
    ans=max(ans,b*d);
    cout<<ans<<endl;

    return 0;
}