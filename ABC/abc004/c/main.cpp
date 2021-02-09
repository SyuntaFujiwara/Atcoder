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

    ll n;
    cin>>n;
    ll begin=(n/5)%6;
    string ans;
    rep(i,6){
        if(begin+i+1<=6)ans+='1'+begin+i;
        else ans+='1'+begin+i-6;
    }
    for(int i=0;i<n%5;i++){
        char x=ans[i];
        ans[i]=ans[i+1];
        ans[i+1]=x;
    }
    cout<<ans<<endl;

    return 0;
}

