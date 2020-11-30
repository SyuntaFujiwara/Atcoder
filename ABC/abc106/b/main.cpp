#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int ans=0;
    for(int i=105;i<=n;i=i+2){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(i%j==0)cnt++;
        }
        if(cnt==8){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}