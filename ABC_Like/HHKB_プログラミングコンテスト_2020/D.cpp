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

    int t;
    cin>>t;
    int n,a,b;
    int MOD = 1000000007;
    rep(i,t){
        cin>>n>>a>>b;
        if(a<b){
            int c=a;
            a=b;
            b=c;
        }
        int x=((n+1-a)*(n+1-a))%MOD;
        int y=((n+1-b)*(n+1-b))%MOD;
        int z=((a+1-b)*(a+1-b))%MOD;
        int ans=((x*y-x*z)%MOD)%MOD;
        cout<<ans<<endl;
    }

    return 0;
}