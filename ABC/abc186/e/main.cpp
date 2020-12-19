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

    int t;
    cin>>t;
    vector<ll>n(t);
    vector<ll>s(t);
    vector<ll>k(t);
    rep(i,t)cin>>n[i]>>s[i]>>k[i];
    rep(i,t){
        bool flag=false;
        if((n[i]-s[i])%k[i]!=0&&n[i]%k[i]==0){
            cout<<-1<<endl;
            flag=true;
        }
        if(flag)continue;
        ll x=n[i]-s[i];
        for(int j=0;;j++){
            if(x%k[i]==0){
                cout<<x/k[i]<<endl;
                break;
            }
            x+=n[i];
        }
    }

    return 0;
}