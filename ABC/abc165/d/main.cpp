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

    ll a,b,n;
    cin>>a>>b>>n;
    ll m=min(n,b-1);
    cout<<min(floor((a*m)/b)-a*floor(m/b),floor((a*m)/b)-a*floor(m/b))<<endl;

    return 0;
}