#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,k,l;
    cin>>n>>k>>l;
    UnionFind road(n);
    rep(i,k){
        int p,q;
        cin>>p>>q;
        p--;q--;
        road.unite(p,q);
    }
    UnionFind rail(n);
    rep(i,l){
        int r,s;
        cin>>r>>s;
        r--;s--;
        rail.unite(r,s);
    }
    map<p,int> cnt ;
    rep(i,n){
        cnt[{road.root(i),rail.root(i)}]++ ;
    }
    rep(i,n){
        cout<<cnt[{road.root(i),rail.root(i)}]<<" ";
    }
    cout<<endl;

    return 0;
}
