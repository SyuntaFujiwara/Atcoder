#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,x;
    cin>>n>>x;
    if(x-1<n-x)cout<<x-1<<endl;
    else cout<<n-x<<endl;

    return 0;
}
