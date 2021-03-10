#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    for(int i=k;i<n;i++){
        if(a[i-k]<a[i])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}

