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
    vector<p> p(n);
    rep(i,n)cin>>p[i].first>>p[i].second;
    int cnt=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            if(abs(p[i].second-p[j].second)<=abs(p[i].first-p[j].first))cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
