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
    vector<long double>r(n);
    rep(i,n)cin>>r[i];
    sort(r.begin(),r.end(),greater<long double>());
    long double ans=0;
    rep(i,n){
        if(i%2==0){
            ans=ans+r[i]*r[i]*M_PI;
        }
        else{
            ans=ans-r[i]*r[i]*M_PI;
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}