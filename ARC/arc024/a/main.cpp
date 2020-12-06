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

    int L,R;
    cin>>L>>R;
    vector<int>l(L);
    rep(i,L)cin>>l[i];
    vector<int>r(R);
    rep(i,R)cin>>r[i];
    int ans=0;
    vector<int>lx(45);
    rep(i,L){
        lx[l[i]]++;
    }
    vector<int>rx(45);
    rep(i,R){
        rx[r[i]]++;
    }
    rep(i,45){
        ans+=min(lx[i],rx[i]);
    }
    cout<<ans<<endl;

    return 0;
}