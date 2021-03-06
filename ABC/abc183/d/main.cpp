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
    
    int n,w;
    cin>>n>>w;
    vector<p>x;
    int s,t,p;
    rep(i,n){
        cin>>s>>t>>p;
        x.push_back(make_pair(s,p));
        x.push_back(make_pair(t,-p));
    }
    ll sum=0;
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){
        sum+=x[i].second;
        if(sum>w){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}