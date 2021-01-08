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

    int m;
    cin>>m;
    vector<p>mxy(m);
    rep(i,m){
        cin>>mxy[i].first>>mxy[i].second;
    }
    for(int i=1;i<m;i++){
        mxy[i].first-=mxy[0].first;
        mxy[i].second-=mxy[0].second;
    }
    int n;
    cin>>n;
    vector<p>nxy(n);
    map<p,int>map;
    rep(i,n){
        cin>>nxy[i].first>>nxy[i].second;
        map[nxy[i]]++;
    }
    rep(i,n){
        int  cnt=0;
        rep(j,m){
            p ex;
            ex.first=mxy[j].first+nxy[i].first;
            ex.second=mxy[j].second+nxy[i].second;
            decltype(map)::iterator itr=map.find(ex);
            if(itr!=map.end())cnt++;
        }
        if(cnt==m-1){
            cout<<nxy[i].first-mxy[0].first<<" "<<nxy[i].second-mxy[0].second<<endl;
            return 0;
        }
    }


    return 0;
}
