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
    int ans=0;
    for(int bit=0;bit<(1<<n+1);bit++){
        bool flag;
        if(bit&1)flag=true;
        else flag=false;
        for(int i=1;i<n+1;i++){
            if(bit&(1<<i)){
                if(s[i-1]=="AND")flag=flag&&true;
                else flag=flag||true;
            } else {
              if (s[i-1] == "AND")
                flag=flag && false;
              else
                flag=flag || false;
            }
        }
        if(flag)ans++; 
    }
    cout<<ans<<endl;

    return 0;
}
