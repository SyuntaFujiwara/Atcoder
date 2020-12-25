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

    ll k,a,b;
    cin>>k>>a>>b;
    ll ans;
    if(b-a<=1||a+1>k){
        ans=k+1;
    }
    else{
        k=k-(a+1);
        ans=b;
        ans+=((b-a)*(k/2));
        if(k%2==1){
            ans+=1;
        }
    }
    cout<<ans<<endl;

    return 0;
}