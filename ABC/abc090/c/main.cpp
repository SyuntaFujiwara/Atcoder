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

    ll n,m;
    cin>>n>>m;
    ll ans;
    if(n==1){
        ans=m-2;
    }
    else if(m==1){
        ans=n-2;
    }
    else if(n==1&&m==1){
        ans=1;
    }
    else if(n==2||m==2){
        ans=0;
    }
    else{
        ans=(n-2)*(m-2);
    }
    if(ans>0)cout<<ans<<endl;
    else cout<<0<<endl;

    return 0;
}