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
    vector<ll>a(n);
    vector<ll>b(n);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    ll max_ab=a[0]*b[0];
    cout<<max_ab<<endl;
    ll max_a=a[0];
    for(int i=1;i<n;i++){
        chmax(max_a,a[i]);
        chmax(max_ab,max_a*b[i]);
        cout<<max_ab<<endl;
    }

    return 0;
}

