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

    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int cnt=0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                if(500*i+100*j+50*k==x)cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}