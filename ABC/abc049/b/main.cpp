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
    vector<vector<char>>c(h,vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin>>c[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            cout<<c[i][j];
        }
        cout<<endl;
        rep(j,w){
            cout<<c[i][j];
        }
        cout<<endl;
    }

    return 0;
}