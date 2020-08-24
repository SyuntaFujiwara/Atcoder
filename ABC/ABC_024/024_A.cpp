#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c,k,s,t;
    cin>>a>>b>>c>>k>>s>>t;
    if(s+t<k)cout<<a*s+b*t<<endl;
    else cout<<a*s+b*t-c*(s+t)<<endl;

    return 0;
}
