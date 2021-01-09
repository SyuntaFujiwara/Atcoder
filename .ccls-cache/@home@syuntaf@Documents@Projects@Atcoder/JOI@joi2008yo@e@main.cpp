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

    int r,c;
    cin>>r>>c;
    vector<vector<int>>a(r,vector<int>(c));
    rep(i,r){
        rep(j,c)cin>>a[i][j];
    }
    int ans=0;
    for(int bit=0;bit<(1<<r);bit++){
        int sum=0;
        for(int i=0;i<c;i++){
            int cnt=0;
            for(int j=0;j<r;j++){
                if(bit&(1<<j)&&a[j][i])cnt++;
                else if(!(bit&(1<<j)||a[j][i]))cnt++;
            }
            sum+=max(cnt,r-cnt);
        }
        chmax(ans,sum);
    }
    cout<<ans<<endl;
    
    return 0;
}
