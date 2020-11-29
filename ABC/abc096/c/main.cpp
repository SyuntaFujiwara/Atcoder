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
        rep(j,w){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            bool flag=false;
            if(s[i][j]=='#'){
                if(i-1>=0&&s[i-1][j]=='#'){
                    flag=true;
                }
                else if(i+1<h&&s[i+1][j]=='#'){
                    flag=true;
                }
                else if(j-1>=0&&s[i][j-1]=='#'){
                    flag=true;
                }
                else if(j+1<w&&s[i][j+1]=='#'){
                    flag=true;
                }
                if(!flag){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}