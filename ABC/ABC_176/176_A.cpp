#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,x,t;
    cin>>n>>x>>t;
    if(n/x==0)cout<<t<<endl;
    else if(n%x==0)cout<<(n/x)*t<<endl;
    else cout<<(n/x+1)*t<<endl;

    return 0;
}
