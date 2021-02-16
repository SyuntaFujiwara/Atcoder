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

    string s;
    cin>>s;
    ll ans=0;
    int n=s.size()+1;
    vector<int>a(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='<')chmax(a[i+1],a[i]+1);
    }
    for(int i=s.size();i>=0;i--){
        if(s[i]=='>')chmax(a[i],a[i+1]+1);
    }
    for(int i=0;i<n;i++){
        ans+=a[i];
    }
    cout<<ans<<endl;

    return 0;
}
