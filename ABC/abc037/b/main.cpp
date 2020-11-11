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

    int n,q;
    cin>>n>>q;
    vector<int>l(q);
    vector<int>r(q);
    vector<int>t(q);
    rep(i,q){
        cin>>l[i]>>r[i]>>t[i];
        l[i]--;
    }
    vector<int>x(n,0);
    for(int i=0;i<q;i++){
        for(int j=l[i];j<r[i];j++){
            x[j]=t[i];
        }
    }
    rep(i,n)cout<<x[i]<<endl;

    return 0;
}