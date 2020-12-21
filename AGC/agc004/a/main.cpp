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

    ll a,b,c;
    cin>>a>>b>>c;
    if(a%2==0||b%2==0||c%2==0)cout<<0<<endl;
    else{
        if(a>b&&a>c)cout<<b*c<<endl;
        else if(b>c&&b>a)cout<<a*c<<endl;
        else cout<<a*b<<endl;
    }

    return 0;
}