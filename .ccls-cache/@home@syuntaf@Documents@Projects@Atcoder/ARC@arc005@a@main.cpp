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
    vector<string>w(n);
    rep(i,n)cin>>w[i];
    int ans=0;
    w[n-1].pop_back();
    rep(i, n) {
      if (w[i] == "takahashikun" || w[i] == "Takahashikun" ||
          w[i] == "TAKAHASHIKUN")
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}

