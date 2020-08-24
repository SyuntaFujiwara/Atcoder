#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c;
    cin>>a>>b>>c;

    if(a<b&&a<c)cout<<3<<endl;
    else if(a>b&&a>c)cout<<1<<endl;
    else cout<<2<<endl;
    if(b<a&&b<c)cout<<3<<endl;
    else if(b>a&&b>c)cout<<1<<endl;
    else cout<<2<<endl;
    if(c<b&&c<a)cout<<3<<endl;
    else if(c>b&&c>a)cout<<1<<endl;
    else cout<<2<<endl;

    return 0;
}
