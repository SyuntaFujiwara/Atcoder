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

    int n,k;
    cin>>n>>k;
    ll h[n];
    rep(i,n){
        cin>>h[i];
    }
    sort(h,h+n);
    ll min_h=1LL<<60;
    rep(i,n-k+1){
        chmin(min_h,h[i+k-1]-h[i]);
    }
    cout<<min_h<<endl;

    return 0;
}