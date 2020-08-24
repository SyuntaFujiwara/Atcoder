#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,cnt=1;
    cin>>n;
    string s[n];
    rep(i,n)cin>>s[i];
    sort(s,s+n);
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
