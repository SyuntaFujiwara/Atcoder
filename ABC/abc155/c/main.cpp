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
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    map<string,int>m;
    rep(i,n){
        m[s[i]]++;
    }
    int max_s=-1;
    for(const auto& x:m){
        int y=x.second;
        chmax(max_s,y);
    }
    for(auto i=m.begin();i!=m.end();i++){
        int y=i->second;
        if(y==max_s)cout<<i->first<<endl;
    }

    return 0;
}