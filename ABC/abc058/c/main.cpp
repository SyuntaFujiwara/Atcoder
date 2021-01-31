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
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    vector<vector<int>>cnt(n,vector<int>(27));
    rep(i,n){
        for(int j=0;j<s[i].size();j++){
            cnt[i][s[i][j]-'a']++;
        }
    }
    string ans;
    rep(j,27){
        int x=1e9;
        rep(i,n){
            chmin(x,cnt[i][j]);
        }
        rep(i,x){
            char y='a'+j;
            cout<<y;
        }
    }
    cout<<endl;

    return 0;
}

