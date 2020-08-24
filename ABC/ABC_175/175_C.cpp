#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x,k,d;
    cin>>x>>k>>d;
    if(x<0){
        x=-x;
    }
    if(x/d>k){
        cout<<x-k*d<<endl;
    }
    else{
        k=k-x/d;
        if(k%2==0)cout<<x%d<<endl;
        else cout<<d-x%d<<endl;
    }



    return 0;
}
