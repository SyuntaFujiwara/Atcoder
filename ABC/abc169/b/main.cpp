#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    rep(i,n)if(!a[i]){
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    rep(i,n){
        if(a[i]<=1000000000000000000/ans){
            ans*=a[i];
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;

    return 0;
}
