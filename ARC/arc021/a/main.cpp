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

    vector<vector<int>>a(4,vector<int>(4));
    rep(i,4){
        rep(j,4)cin>>a[i][j];
    }
    bool flag=false;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i+1<4&&a[i][j]==a[i+1][j])flag=true;
            if(j+1<4&&a[i][j]==a[i][j+1])flag=true;
        }
    }
    if(flag)cout<<"CONTINUE"<<endl;
    else cout<<"GAMEOVER"<<endl;

    return 0;
}

