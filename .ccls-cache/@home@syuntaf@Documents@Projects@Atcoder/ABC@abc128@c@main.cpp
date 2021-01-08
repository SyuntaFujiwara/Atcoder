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

    int n,m;
    cin>>n>>m;
    vector<int>k(m);
    vector<vector<int>>s(m,vector<int>(0));
    vector<int>p(m);
    vector<vector<bool>>sw(m,vector<bool>(n));
    rep(i,m){
        cin>>k[i];
        rep(j,k[i]){
            int S;
            cin>>S;
            s[i].push_back(S);
            sw[i][s[i][j]-1]=true;
        }
    }
    rep(i,m)cin>>p[i];
    int ans=0;
    for(int bit=0;bit<(1<<n);bit++){
        vector<int>flag(m);
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                for(int j=0;j<m;j++){
                    if(sw[j][i]){
                        flag[j]++;
                    }
                }
            }
        }
        bool fl=true;
        for(int i=0;i<m;i++){
            if(flag[i]%2!=p[i]){
                fl=false;
                break;
            }
        }
        if(fl)ans++;
    }
    cout<<ans<<endl;

    return 0;
}
