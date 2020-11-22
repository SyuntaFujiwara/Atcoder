#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    if(l1==l2)cout<<l3<<endl;
    else if(l2==l3)cout<<l1<<endl;
    else cout<<l2<<endl;

    return 0;
}
