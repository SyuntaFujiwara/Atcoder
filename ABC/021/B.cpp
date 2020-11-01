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

    int n,a,b;
    cin>>n>>a>>b;
    int k;
    cin>>k;
    int p[k];
    rep(i,k){
        cin>>p[i];
    }
    int town[n]={};
    town[a-1]++;
    town[b-1]++;
    rep(i,k){
        town[p[i]-1]++;
    }
    bool flag=true;
    rep(i,n){
        if(town[i]!=1&&town[i]!=0)flag=false;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}