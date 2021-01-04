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
    for(int i=0;i<s.size();i++){
        if(s[i]=='O')s[i]='0';
        else if(s[i]=='D')s[i]='0';
        else if(s[i]=='I')s[i]='1';
        else if(s[i]=='Z')s[i]='2';
        else if(s[i]=='S')s[i]='5';
        else if(s[i]=='B')s[i]='8';
    }
    cout<<s<<endl;

    return 0;
}
