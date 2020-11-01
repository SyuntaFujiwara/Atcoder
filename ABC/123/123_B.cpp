#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n[5];
    rep(i,5){
        cin>>n[i];
    }
    int last=10;
    rep(i,5){
        if(last>(n[i]%10)%10&&(n[i]%10)%10!=0){
            last=(n[i]%10)%10;
        }
    }
    last=10-last;
    int ans=0;
    for(int i=0;i<5;i++){
        ans+=n[i]+(10-(n[i]%10)%10)%10;
    }
    cout<<ans-last<<endl;

    return 0;
}