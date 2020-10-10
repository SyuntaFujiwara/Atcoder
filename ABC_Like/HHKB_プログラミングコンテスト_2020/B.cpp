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
    string s[h];
    rep(i,h){
        cin>>s[i];
    }
    int cnt=0;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='.'){
                if(i+1<h&&s[i+1][j]=='.')cnt++;
                if(j+1<w&&s[i][j+1]=='.')cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}