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

    int a,b;
    cin>>a>>b;
    if(a+b>=15&&b>=8)cout<<1<<endl;
    else if(a+b>=10&&b>=3)cout<<2<<endl;
    else if(a+b>=3)cout<<3<<endl;
    else cout<<4<<endl;

    return 0;
}

