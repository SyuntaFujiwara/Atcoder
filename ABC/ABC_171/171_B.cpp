#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;
    int p[n];
    rep(i,n){
        cin>>p[i];
    }
    sort(p,p+n);
    int sum=0;
    rep(i,k){
        sum+=p[i];
    }
    cout<<sum<<endl;

    return 0;
}
