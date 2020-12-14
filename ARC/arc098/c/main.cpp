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
    string s;
    cin>>s;
    vector<int>e_cnt(n);
    if(s[0]=='E'){
        e_cnt[0]=1;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='E'){
            e_cnt[i]=e_cnt[i-1]+1;
        }
        else{
            e_cnt[i]=e_cnt[i-1];
        }
    }
    int ans=e_cnt[n-1]-e_cnt[0];
    for(int i=1;i<n;i++){
        chmin(ans,(i-e_cnt[i-1])+(e_cnt[n-1]-e_cnt[i]));
    }
    cout<<ans<<endl;

    return 0;
}