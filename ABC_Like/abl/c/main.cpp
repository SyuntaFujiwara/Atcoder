#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N) {
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return; 
        par[rx] = ry; 
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    vector<int>b(m);
    rep(i,m){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
    }
    UnionFind tree(n);   
    for(int i=0;i<m;i++){
        tree.unite(a[i],b[i]);
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[tree.root(i)]=1;
    }
    cout<<mp.size()-1<<endl;

    return 0;
}

