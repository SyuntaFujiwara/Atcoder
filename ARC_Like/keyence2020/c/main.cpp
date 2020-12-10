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

    ll n,k,s;
    cin>>n>>k>>s;
    rep(i,k){
        cout<<s<<" ";
    }
    rep(i,n-k){
        if(s!=1e9){
            cout<<s+1;
        }
        else{
            cout<<1;
        }
        if(i!=n-k-1){
            cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}