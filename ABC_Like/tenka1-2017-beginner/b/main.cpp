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

    int n;
    cin>>n;
    vector<p>p(n);
    rep(i,n){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end());
    int ans=p[n-1].first+p[n-1].second;
    cout<<ans<<endl;

    return 0;
}

