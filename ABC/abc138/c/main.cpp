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
    vector<long double>v(n);
    rep(i,n)cin>>v[i];
    sort(v.begin(),v.end());
    long double next=v[0];
    for(int i=1;i<n;i++){
        next=(next+v[i])/2;
    }
    cout<<next<<endl;

    return 0;
}