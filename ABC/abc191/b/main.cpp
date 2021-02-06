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

    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    vector<int>ans;
    rep(i,n){
        if(a[i]!=x)ans.push_back(a[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1)cout<<" ";
    }
    cout<<endl;

    return 0;
}

