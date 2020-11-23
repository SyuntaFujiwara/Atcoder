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

    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(q);
    rep(i,q)cin>>a[i];
    vector<ll>b(n,k);
    rep(i,q){
        b[a[i]-1]++;
    }
    rep(i,n){
        b[i]-=q;
        if(b[i]<=0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}