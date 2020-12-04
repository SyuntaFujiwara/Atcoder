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
    int t[n];
    rep(i,n)cin>>t[i];
    int ans=1e9;
    for(int bit=0;bit<(1<<n);++bit){
        int r=0,l=0;
        rep(i,n){
            if(bit&(1<<i)){
                r+=t[i];
            }
            else{
                l+=t[i];
            }
        }
        int maxt=max(r,l);
        ans=min(ans,maxt);
    }
    cout<<ans<<endl;

    return 0;
}
