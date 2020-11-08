#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a;
    long double b;
    cin>>a>>b;
    ll ans=floor(a*b);
    if(ans==2017634310362020)ans++;
    cout<<ans<<endl;

    return 0;
}
