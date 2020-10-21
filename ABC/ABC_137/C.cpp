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
    string s[n];
    rep(i,n){
        cin>>s[i];
    }
    map<string,int> cnt;
    rep(i,n){
        sort(s[i].begin(),s[i].end());
        cnt[s[i]]++;
    }
    ll ans=0;
    for(auto&& x:cnt){
        if(x.second>1){
            rep(j,x.second){
                ans+=j;
            }
        }
    }
    std::cout<<ans<<endl;

    return 0;
}