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

    int h,w;
    cin>>h>>w;
    vector<vector<char>>s(h,vector<char>(w));
    rep(i,h){
        rep(j,w)cin>>s[i][j];
    }
    int ans=0;
    for(int i=0;i<h-1;i++){
        for(int j=0;j<w-1;j++){
            int cnt=0;
            if(s[i][j]=='#')cnt++;
            if(s[i][j+1]=='#')cnt++;
            if(s[i+1][j]=='#')cnt++;
            if(s[i+1][j+1]=='#')cnt++;
            if(cnt==1||cnt==3)ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
