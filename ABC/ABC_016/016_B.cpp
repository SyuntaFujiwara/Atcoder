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
    if(a+b==c&&a-b==c)cout<<'?'<<endl;
    else if(a+b==c)cout<<'+'<<endl;
    else if(a-b==c)cout<<'-'<<endl;
    else cout<<'!'<<endl;

    return 0;
}