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
    bool n_flag=false;
    bool s_flag=false;
    bool e_flag=false;
    bool w_flag=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='N')n_flag=true;
        if(s[i]=='S')s_flag=true;
        if(s[i]=='E')e_flag=true;
        if(s[i]=='W')w_flag=true;
    }
    if(n_flag^s_flag||e_flag^w_flag)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}

