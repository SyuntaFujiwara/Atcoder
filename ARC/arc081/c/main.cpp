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
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int cnt=0;
    vector<ll>l(100005);
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            l[cnt++]=a[i];
            i++;
        }
    }
    ll ans=l[0]*l[1];
    cout<<ans<<endl;

    return 0;
}