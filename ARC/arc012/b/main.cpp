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
    long double va,vb,l;
    cin>>n>>va>>vb>>l;
    long double t;
    for(int i=0;i<n;i++){
        t=l/va;
        l=t*vb;
    }
    cout<<fixed<<setprecision(15)<<l<<endl;

    return 0;
}

