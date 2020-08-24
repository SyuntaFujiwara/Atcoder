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
    cout<<int(double(n)/2+0.5)<<endl;
    rep(i,n/2){
        cout<<2<<endl;
    }
    if(n%2!=0){
        cout<<1<<endl;
    }

    return 0;
}
