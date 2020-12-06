#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    vector<p>ab(m);
    rep(i,m)cin>>ab[i].first>>ab[i].second;
    vector<bool>start(n);
    vector<bool>goal(n);
    rep(i,m){
        if(ab[i].first==1){
            start[ab[i].second]=true;
        }
        if(ab[i].second==n){
            goal[ab[i].first]=true;
        }
    }
    rep(i,n){
        if(start[i]&&goal[i]){
            cout<<"POSSIBLE"<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}