#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    string s,t;
    cin>>s>>t;
    int cnt=0;
    rep(i,s.length()){
        if(s[i]!=t[i])cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}