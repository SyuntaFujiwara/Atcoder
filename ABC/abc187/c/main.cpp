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
    vector<string>s(n);
    rep(i,n)cin>>s[i];
    map<string,int> m;
    rep(i,n)m[s[i]]++;
    vector<string>s2;
    for(auto [key,value]:m){
        s2.push_back(key);
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i][0]!='!')s2[i]="!"+s2[i];
    }
    map<string,int>m2;
    for(int  i=0;i<s2.size();i++){
        m2[s2[i]]++;
        if(m2[s2[i]]>1){
            for(int j=1;j<s2[i].size();j++)cout<<s2[i][j];
            cout<<endl;
            return 0;
        }
    }
    cout<<"satisfiable"<<endl;

    return 0;
}
