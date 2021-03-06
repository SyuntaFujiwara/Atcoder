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
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    ll prev=a[0];
    int flag=0;
    //↗︎1↘︎-1→0未定0
    int ans=1;
    for(int i=1;i<n;i++){
        if(prev<a[i]){
            if(flag==-1){
                ans++;
                flag=0;
                prev=a[i];
                continue;
            }
            flag=1;
        }
        else if(prev>a[i]){
            if(flag==1){
                ans++;
                flag=0;
                prev=a[i];
                continue;
            }
            flag=-1;
        }
        prev=a[i];
    }
    cout<<ans<<endl;

    return 0;
}