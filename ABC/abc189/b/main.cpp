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
    ll x;
    cin>>n>>x;
    vector<ll>v(n);
    vector<ll>p(n);
    rep(i, n) cin >> v[i] >> p[i]; 
    x*=100;
    ll sum=0;
    rep(i,n){
        sum+=(v[i]*p[i]);
        if (sum > x) {
          cout << i + 1 << endl;
          return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
