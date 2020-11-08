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
    int ans;
    int max_gcd=-1;
    for(int i=a[0];i>=2;i--){
        int gcd=0;
        for(int j=0;j<n;j++){
            if(a[j]%i==0)gcd++;
        }
        if(max_gcd<gcd){
            max_gcd=gcd;
            ans=i;
        }
    }
    cout<<ans<<endl;

    return 0;
}