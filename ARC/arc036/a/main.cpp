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

    int n,k;
    cin>>n>>k;
    vector<int>t(n);
    rep(i,n)cin>>t[i];
    int sum=t[0]+t[1];
    for(int i=2;i<n;i++){
        sum+=t[i];
        if(sum<k){
            cout<<i+1<<endl;
            return 0;
        }
        sum-=t[i-2];
    }
    cout<<-1<<endl;

    return 0;
}