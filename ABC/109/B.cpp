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
    bool flag=true;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(w[i]==w[j]){
                flag=false;
                break;
            }
        }
        if(w[i][0]!=w[i-1][w[i-1].size()-1]){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}