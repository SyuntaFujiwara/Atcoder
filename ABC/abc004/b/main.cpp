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

    vector<vector<char>>c(4,vector<char>(4));
    rep(i,4){
        rep(j,4){
            cin>>c[i][j];
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            cout<<c[i][j];
            if(j==0){
                cout<<endl;
            }
            else cout<<" ";
        }
    }

    return 0;
}