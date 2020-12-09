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

    int n;
    cin>>n;
    vector<int>d(n);
    rep(i,n)cin>>d[i];
    int m;
    cin>>m;
    vector<int>t(m);
    rep(i,m)cin>>t[i];
    map<int,int>md;
    rep(i,n){
        md[d[i]]++;
    }
    map<int,int>mt;
    rep(i,m){
        mt[t[i]]++;
    }
    for(const auto& [key,value]:mt){
        if(mt[key]>md[key]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}