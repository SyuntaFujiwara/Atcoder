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

    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(n);
    rep(i,n)cin>>a[i]>>b[i];
    vector<int>c(m);
    vector<int>d(m);
    rep(i,m)cin>>c[i]>>d[i];
    for(int i=0;i<n;i++){
        int min_l=1e9;
        int ans;
        for(int j=0;j<m;j++){
            if(abs(a[i]-c[j])+abs(b[i]-d[j])<min_l){
                ans=j+1;
                min_l=abs(a[i]-c[j])+abs(b[i]-d[j]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}