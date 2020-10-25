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
    char a[h][w];
    rep(i,h){
        rep(j,w)cin>>a[i][j];
    }
    vector<vector<char>>b(h,vector<char>(w));
    int x=0;
    for(int i=0;i<w;i++){
        bool flag=false;
        for(int j=0;j<h;j++){
            if(a[j][i]=='#'){
                flag=true;
                break;
            }
        }
        if(flag){
            rep(j,h){
                b.at(j).at(x)=a[j][i];
            }
            x++;
        }
    }
    vector<vector<char>>ans(h,vector<char>(x));
    int y=0;
    for(int i=0;i<h;i++){
        bool flag=false;
        for(int j=0;j<x;j++){
            if(b[i][j]=='#'){
                flag=true;
                break;
            }
        }
        if(flag){
            rep(j,x){
                ans.at(y).at(j)=b[i][j];
            }
            y++;
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}