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
    vector<string>w(n);
    rep(i,n)cin>>w[i];
    map<string,int>m;
    rep(i,n){
        m[w[i]]++;
        if(m.size()!=i+1){
            if(i%2==1)cout<<"WIN"<<endl;
            else cout<<"LOSE"<<endl;
            return 0;
        }
        if(i>0&&w[i-1][w[i-1].size()-1]!=w[i][0]){
            if(i%2==1)cout<<"WIN"<<endl;
            else cout<<"LOSE"<<endl;
            return 0;
        }
    }
    cout<<"DRAW"<<endl;

    return 0;
}