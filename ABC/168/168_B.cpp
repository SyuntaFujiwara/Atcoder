#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    
    int k;
    string s;
    cin>>k>>s;
    if(s.size()>k) cout<<s.substr(0,k)<<"..."<<endl;
    else cout<<s<<endl;

    return 0;
}
