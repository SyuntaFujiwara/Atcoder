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

    int n,k;
    cin>>n>>k;
    vector<vector<int>>t(n,vector<int>(n));
    rep(i,n){
        rep(j,n){
            cin>>t[i][j];
        }
    }
    int ans=0;
    vector<int>x;
    rep(i,n){
        x.push_back(i);
    }
    do {
        if(x[0]!=0){
            continue;
        }
        int sum=0;
        int i=0;
        for (auto num : x) {
            sum+=t[i][num];
            i=num;
        }
        sum+=t[i][0];
        if(sum==k)ans++;
    } while (next_permutation(x.begin(), x.end()));
    cout<<ans<<endl;

    return 0;
}