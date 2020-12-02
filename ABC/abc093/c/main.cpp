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

    int a,b,c;
    cin>>a>>b>>c;
    int n[3]={a,b,c};
    sort(n,n+3,greater<int>());
    int ans=n[0]*2-n[1]-n[2];
    if(ans%2==0){
        ans=ans/2;
    }
    else{
        ans=(ans+3)/2;
    }
    cout<<ans<<endl;

    return 0;
}