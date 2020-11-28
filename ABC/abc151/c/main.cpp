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
    vector<pair<int,string>>p(m);
    rep(i,m)cin>>p[i].first>>p[i].second;
    vector<int>q(n);
    int ac=0;
    int wa=0;
    rep(i,m){
        if(p[i].second=="AC"){
            if(q[p[i].first-1]!=-1){
                wa+=q[p[i].first-1];
                q[p[i].first-1]=-1;
                ac++;
            }
        }
        else{
            if(q[p[i].first-1]!=-1){
                q[p[i].first-1]++;
            }
        }
    }
    cout<<ac<<" "<<wa<<endl;

    return 0;
}