#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;
    if(s=="SSS")cout<<0<<endl;
    else if(s=="SRR"||s=="RRS")cout<<2<<endl;
    else if(s=="RRR")cout<<3<<endl;
    else cout<<1<<endl;

    return 0;
}
