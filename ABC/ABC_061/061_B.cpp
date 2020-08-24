#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m,cnt=0;
    cin>>n>>m;
    int a[m];
    int b[m];
    rep(i,m)cin>>a[i]>>b[i];
    int c[n][n]={};
    rep(i,m){
        c[a[i]-1][b[i]-1]+=1;
        c[b[i]-1][a[i]-1]+=1;
    }
    rep(i,n){
        for(int j=0;j<n;j++){
            cnt+=c[i][j];
        }
        cout<<cnt<<endl;
        cnt=0;
    }

    return 0;
}