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
    int p[n];
    rep(i,n)cin>>p[i];
    int cnt[200005]={};
    int j=0;
    for(int i=0;i<n;i++){
        cnt[p[i]]++;
        for(;;j++){
            if(cnt[j]==0){
                cout<<j<<endl;
                break;
            }
        }
    }

    return 0;
}