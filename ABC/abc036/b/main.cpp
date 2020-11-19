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
    vector<vector<char>>s(n,vector<char>(n));
    rep(i,n){
        rep(j,n)cin>>s[i][j];
    }
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            cout<<s[i][j];
        }
        cout<<endl;
    }

    return 0;
}