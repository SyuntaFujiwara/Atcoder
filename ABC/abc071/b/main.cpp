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
    int cnt[26]={};
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    rep(i,26){
        if(cnt[i]==0){
            char ans='a'+i;
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;

    return 0;
}
