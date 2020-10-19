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
    int k;
    cin>>k;
    int ans;
    if(a>b&&b>c){
        ans=a;
        rep(i,k){
            ans*=2;
        }
        cout<<ans+b+c<<endl;
    }
    else if(b>a&&b>c){
        ans=b;
        rep(i,k){
            ans*=2;
        }
        cout<<ans+a+c<<endl;
    }
    else{
        ans=c;
        rep(i,k){
            ans*=2;
        }
        cout<<ans+b+a<<endl;
    }

    return 0;
}