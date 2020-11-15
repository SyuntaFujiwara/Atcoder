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
    ll ans=1LL<<60;
    for(int i=0;i<100000;i++){
        if(i>n){
            break;
        }
        for(int j=i;j<100000;j++){
            ll sum=(j-i)+(n-j*i);
            if(i*j>n||sum<0){
                break;
            }
            else{
                chmin(ans,sum);
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}