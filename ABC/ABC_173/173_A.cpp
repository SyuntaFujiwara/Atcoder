#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    if(n%1000==0)
        cout<<0<<endl;
    else{
        cout<<1000-(n%1000)<<endl;
    }

    return 0;
}
