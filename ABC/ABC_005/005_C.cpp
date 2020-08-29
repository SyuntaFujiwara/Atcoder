#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {

    cin.tie(0);
    ios::sync_with_stdio(false);


    int t,n;
    cin>>t>>n;
    int a[n];
    rep(i,n)cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    rep(i,m)cin>>b[i];
    rep(i,m){
        rep(j,n){
            if(b[i]<=a[j]+t&&b[i]>=a[j]){
                a[j]=1e9;
                b[i]=1e9;
                break;
            }
        }
    }
    bool flag=true;
    rep(i,m){
        if(b[i]!=1e9)flag=false;
    }
    if(flag)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}
