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
    string s2=s;
    if(s[0]=='0')s2[0]='1';
    else s2[0]='0';
    int cnt=0;
    int cnt2=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            cnt++;
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
        }
        if(s2[i]==s2[i-1]){
            cnt2++;
            if(s2[i]=='0')s2[i]='1';
            else s2[i]='0';
        }
    }
    cout<<min(cnt,cnt2)<<endl;

    return 0;
}