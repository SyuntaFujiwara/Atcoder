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

    int n,x;
    cin>>n>>x;
    vector<int>m(n);
    rep(i,n)cin>>m[i];
    sort(m.begin(),m.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(x-m[i]<0){
            break;
        }
        ans++;
        x-=m[i];
    }
    while(x-m[0]>=0){
        ans++;
        x-=m[0];
    }
    cout<<ans<<endl;

    return 0;
}