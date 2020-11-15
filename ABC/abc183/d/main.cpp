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

    int n,w;
    cin>>n>>w;
    int max_t=-1;
    vector<int>s(n);
    vector<int>t(n);
    vector<int>p(n);
    rep(i,n){
        cin>>s[i]>>t[i]>>p[i];
        chmax(max_t,t[i]);
    }
    vector<int>sum(max_t+5,0);
    rep(i,n){
        for(int j=s[i];j<t[i];j++){
            sum[j]+=p[i];
        }
    }
    for(int i=0;i<max_t;i++){
        if(w<sum[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}