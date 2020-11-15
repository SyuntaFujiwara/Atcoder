#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int s[3],e[3];
    rep(i,3)cin>>s[i]>>e[i];
    cout<<s[0]*e[0]/10+s[1]*e[1]/10+s[2]*e[2]/10<<endl;
    
    return 0;
}
