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
    int ans=0;
    for(int i=1;i<=n;i++){
        bool flag=true;
        string s=to_string(i);
        for(int j=0;j<s.size();j++){
            if(s[j]=='7'){
                flag=false;
            }
        }
        std::stringstream ss;
        ss << std::oct << i;
        std::string t = ss.str();
        for(int j=0;j<t.size();j++){
            if(t[j]=='7')flag=false;
        }
        if(flag){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}