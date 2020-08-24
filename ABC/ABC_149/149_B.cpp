#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a,b,k;
    cin>>a>>b>>k;
    a-=k;
    if(a+b<0)cout<<"0 0"<<endl;
    else if(a<0) cout<<"0 "<<b+a<<endl;
    else cout<<a<<" "<<b<<endl;

    return 0;
}