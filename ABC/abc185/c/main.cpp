#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
void partitions(int n, int max_n, vector<int> v, vector<vector<int> >& vv)
{
    if (n == 0) {
        vv.push_back(v);
        return;
    }
    for (int i = min(n, max_n); i > 0; i--) {
        v.push_back(i);
        partitions(n - i, i, v, vv);
        v.pop_back();
    }
}
ll nCk(int n, int k) {
    ll x = 1; // n!の初期値
    ll y = 1; // (n-k)!の初期値
    ll z = 1; // k!の初期値

    rep(i, n) x *= n - i; // n!を計算
    rep(i, n - k) y *= n - k - i; // (n-k)!を計算
    rep(i, k) z *= k - i; // k!を計算

    return (x / (y * z)); // 定義通りに計算
}

int main(int argc, char* argv[])
{
    int l;
    cin>>l;
    vector<vector<int> > vv;

    partitions(l, l-11, vector<int>(), vv);

    ll ans=0;
    vector<int>x(12);
    for(int i=0;i<vv.size();i++){
        if(vv[i].size()==12){
            x=vv[i];
            map<int,int> m;
            for(int j=0;j<x.size();j++){
                m[x[i]]++;
            }

            ans+=nCk(12,m.size()-1);
        }
    }
    cout<<ans<<endl;

    return 0;
}