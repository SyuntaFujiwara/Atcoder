#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int MOD = 1e9+7;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;
    int a[n];
    rep(i,n)cin>>a[i];
    int max_s=-1e9;
    for(int bit=0;bit<(1<<n);++bit){
        int s=1;
        int bit_cnt=0;
        for(int i=0;i<n;++i){
            if(bit&(1<<i)){
                bit_cnt+=1;
                s*=a[i];
            }
        }
        if(bit_cnt==k){
            max_s=max(max_s,s);
        }
    }
    int ans=max_s%MOD;
    if(ans>=0)
        cout<<ans<<endl;
    else
        cout<<ans+MOD<<endl;

    return 0;
}
