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
    vector<ll>x(n);
    rep(i,n)cin>>x[i];
    vector<ll>y=x;
    sort(y.begin(),y.end());
    ll mid=y[(n/2)-1];
    rep(i,n){
        if(x[i]>mid){
            cout<<y[(n/2)-1]<<endl;
        }
        else{
            cout<<y[(n/2)]<<endl;
        }
    }

    return 0;
}