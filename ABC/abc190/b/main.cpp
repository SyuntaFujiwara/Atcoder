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

    int n,s,d;
    cin>>n>>s>>d;
    vector<int>x(n);
    vector<int>y(n);
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n){
        if(x[i]<s&&y[i]>d){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

    return 0;
}

