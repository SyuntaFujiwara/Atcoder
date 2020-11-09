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
    vector<vector<char>>a(h,vector<char>(w));
    rep(i,h){
        rep(j,w)cin>>a[i][j];
    }
    rep(i,w+2)cout<<'#';
    cout<<endl;
    for(int i=0;i<h;i++){
        cout<<'#';
        for(int j=0;j<w;j++){
            cout<<a[i][j];
        }
        cout<<'#'<<endl;
    }
    rep(i,w+2)cout<<'#';
    cout<<endl;

    return 0;
}