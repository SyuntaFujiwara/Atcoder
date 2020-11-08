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
    rep(i,n)cin>>a[i];
    ll ans=0;
    ll sum=0;
    vector<ll>b(n+1);
    b[0]=0;
    for(int i=1;i<n+1;i++){
        b[i]=b[i-1]+a[i-1];
    }
    int max_point=0;
    for(int i=0;i<n;i++){
        chmax(ans,sum+b[max_point]);
        if(sum+b[max_point]<sum+b[i+1]){
            max_point=i+1;
        }
        sum+=b[i+1];
    }
    chmax(ans,sum);
    cout<<ans<<endl;

    return 0;
}