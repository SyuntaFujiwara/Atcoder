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
    bool flag=true;
    if(s[0]!='A')flag=false;
    if(s[1]<'a')flag=false;
    int c_cnt=0;
    for(int i=2;i<s.size()-1;i++){
        if(s[i]=='C')c_cnt++;
    }
    if(c_cnt!=1)flag=false;
    int up_cnt=0;
    for(int i=2;i<s.size();i++){
        if(s[i]<'a')up_cnt++;
    }
    if(up_cnt!=1)flag=false;
    if(flag)cout<<"AC"<<endl;
    else cout<<"WA"<<endl;

    return 0;
}