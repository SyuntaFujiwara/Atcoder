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

    string s;
    cin>>s;
    ll k;
    cin>>k;
    for(ll i=0;i<s.size();i++){
        if(s[i]!='1'){
            cout<<s[i]<<endl;
            return 0;
        }
        else if(i==k-1){
            cout<<1<<endl;
            return 0;
        }
    }

    return 0;
}