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
    vector<int>l(n);
    rep(i,n){
        cin>>l[i];
    }
    int max_l=-1;
    int sum=0;
    rep(i,n){
        chmax(max_l,l[i]);
        sum+=l[i];
    }
    if(sum-max_l>max_l)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}