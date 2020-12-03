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

    int l,r;
    cin>>l>>r;
    l=l%2019;
    if(l-r<2019){
        r=r%2019;
    }
    int ans=2025;
    for(int i=l;i<=min(r,l+2029);i++){
        for(int j=i+1;j<=min(r,i+2029);j++){
            chmin(ans,(i*j)%2019);
        }
    }
    cout<<ans<<endl;

    return 0;
}
