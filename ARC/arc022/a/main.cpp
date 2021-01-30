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
    bool i_flag=false;
    bool c_flag=false;
    bool t_flag=false;
    rep(i,s.size()){
        if(s[i]=='I'||s[i]=='i')i_flag=true;
        if((s[i]=='C'||s[i]=='c')&&i_flag==true)c_flag=true;
        if((s[i]=='T'||s[i]=='t')&&c_flag==true)t_flag=true;
    }
    if(t_flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

