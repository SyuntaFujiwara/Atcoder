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
    string s[n];
    int p[n];
    int sum=0;
    rep(i,n){
        cin>>s[i]>>p[i];
        sum+=p[i];
    }
    rep(i,n){
        if(p[i]>sum/2){
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"atcoder"<<endl;

    return 0;
}