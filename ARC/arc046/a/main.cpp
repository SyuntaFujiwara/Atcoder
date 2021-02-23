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
    int cnt=0;
    for(int i=1;i<560000;i++){
        string s=to_string(i);
        bool flag=true;
        for(int j=1;j<s.size();j++){
            if(s[j]!=s[j-1]){
                flag=false;
                break;
            }
        }           
        if(flag)cnt++;
        if(cnt==n){
            cout<<i<<endl;
            return 0;
        }
    }


    return 0;
}

