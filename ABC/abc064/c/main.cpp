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
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    vector<int>cnt(9);
    rep(i,n){
        if(a[i]<3200)cnt[a[i]/400]++;
        else cnt[8]++;
    }
    int ans=0;
    rep(i,8){
        if(cnt[i]>0){
            ans++;
        }
    }
    cout<<max(1,ans)<<" "<<ans+cnt[8]<<endl;

    return 0;
}