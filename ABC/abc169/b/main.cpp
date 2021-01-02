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
    int a;
    ll ans=1;
    rep(i,n){
        cin>>a;
        ans*=a;
    }
    if(ans<0)cout<<-1<<endl;
    else cout<<ans<<endl;



    return 0;
}
