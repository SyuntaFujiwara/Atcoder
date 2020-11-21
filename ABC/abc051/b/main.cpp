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

    int k,s;
    cin>>k>>s;
    int cnt=0;
    rep(i,k+1){
        rep(j,k+1){
            if(i+j+k>=s&&i+j<=s)cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}