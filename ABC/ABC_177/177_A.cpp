#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d,t,s;
    cin>>d>>t>>s;
    if(d<=t*s)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
