#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a,ll b){
    if (a%b==0){
        return(b);
    }
    else{
        return(gcd(b,a%b));
    }
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    ll a,b;
    cin>>a>>b;
    a--;
    ll c,d;
    cin>>c>>d;
    ll A=a-a/c-a/d+a/lcm(c,d);
    ll B=b-b/c-b/d+b/lcm(c,d);
    ll ans=B-A;
    cout<<ans<<endl;

    return 0;
}