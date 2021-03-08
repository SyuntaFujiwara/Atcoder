#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,a,b;
    cin>>n>>a>>b;
    vector<int>p(n);
    rep(i,n)cin>>p[i];
    int x=0;
    int y=0;
    int z=0;
    rep(i,n){
        if(p[i]<=a)x++;
        else if(p[i]<=b)y++;
        else z++;
    }
    int ans=min(x,min(y,z));
    cout<<ans<<endl;

    return 0;
}

