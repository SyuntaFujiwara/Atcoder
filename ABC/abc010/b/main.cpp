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
    int ans=0;
    rep(i,n){
        if(a[i]%6>3){
            ans+=(a[i]%6-3);
        }
        else if(a[i]%6==2){
            ans+=1;
        }
        else if(a[i]%6==0){
            ans+=3;
        }
    }
    cout<<ans<<endl;

    return 0;
}