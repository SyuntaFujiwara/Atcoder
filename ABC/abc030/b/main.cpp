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

    long double n,m;
    cin>>n>>m;
    long double ans;
    if(n>12)n-=12;
    ans=abs(6*m-(n*30+m/2));
    if(ans>180)ans=360-ans;
    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}