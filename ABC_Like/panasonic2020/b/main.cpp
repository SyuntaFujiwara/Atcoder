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

    ll h,w;
    cin>>h>>w;
    ll area=h*w;
    ll ans;
    if(h==1||w==1)ans=1;
    else if(area%2==0)ans=area/2;
    else ans=area/2+1;
    cout<<ans<<endl;

    return 0;
}