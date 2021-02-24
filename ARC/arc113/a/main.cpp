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
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i*j<=n)ans+=n/(i*j);
            else break;
        }
    }
    cout<<ans<<endl;

    return 0;
}

