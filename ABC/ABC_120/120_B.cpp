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

    int a,b,k;
    cin>>a>>b>>k;
    vector<int> ans;
    for(int i=min(a,b);i>0;i--){
        if(a%i==0&&b%i==0){
            ans.push_back(i);
        }
    }
    cout<<ans[k-1]<<endl;

    return 0;
}