#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int p[n];
    rep(i,n){
        cin>>p[i];
    }
    int cnt=0;
    rep(i,n){
        if(p[i]!=i+1){
            cnt++;
        }
    }
    if(cnt==2||cnt==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}