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
    long double x[n];
    rep(i,n){
        cin>>x[i];
    }
    long double ans2=0;
    ll ans1=0;
    long double ans3=0;
    rep(i,n){
        ans1=ans1+abs(x[i]);
        ans2=ans2+(x[i]*x[i]);
        ans3=max(ans3,abs(x[i]));
    }
    ans2=sqrt(ans2);
    cout<<ans1<<endl;
    cout<<fixed<<setprecision(15)<<ans2<<endl;
    cout<<ans3<<endl;

    return 0;
}