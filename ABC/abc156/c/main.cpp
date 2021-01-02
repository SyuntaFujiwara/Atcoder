#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,p,sum=0,min_s=10000009;
    cin>>n;
    vector<int>x(n);
    rep(i,n)cin>>x[i];
    sort(x.begin(),x.end());
    for(int P=x[0];P<=x.back();P++){
        rep(j,n){
            sum+=pow(x[j]-P,2);
        }
        min_s=min(min_s,sum);
        sum=0;
    }
    cout << min_s<< endl;

    return 0;
}