#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w;
    cin>>h>>w;
    string s[h];
    int ans[h][w]={};
    rep(i,h){
        cin>>s[i];
    }
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'){
                rep(k,8){
                    if(i+dy[k]<0||i+dy[k]>=h)continue;
                    if(j+dx[k]<0||j+dx[k]>=w)continue;
                    ans[i+dy[k]][j+dx[k]]++;
                }
            }
        }
    }
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#')cout<<s[i][j];
            else cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}