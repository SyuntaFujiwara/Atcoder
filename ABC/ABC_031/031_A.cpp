#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,d;
    cin>>a>>d;
    if(a>d)cout<<a*(d+1)<<endl;
    else cout<<(a+1)*d<<endl;

    return 0;
}
