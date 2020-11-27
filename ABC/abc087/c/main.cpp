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
    vector<vector<int>>a(2,vector<int>(n));
    rep(i,2){
        rep(j,n){
            cin>>a[i][j];
        }
    }
    int ans=-1;
    rep(i,n){
        int sum=0;
        rep(j,n){
            if(j<i){
                sum+=a[0][j];
            }
            else if(i==j){
                sum+=(a[0][j]+a[1][j]);
            }
            else{
                sum+=a[1][j];
            }
        }
        chmax(ans,sum);
    }
    cout<<ans<<endl;

    return 0;
}