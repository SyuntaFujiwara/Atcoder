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
    int a[n];
    rep(i,n)cin>>a[i];
    int amax=-1,amin=1e9;
    rep(i,n){
        chmin(amin,a[i]);
        chmax(amax,a[i]);
    }
    cout<<amax-amin<<endl;

    return 0;
}