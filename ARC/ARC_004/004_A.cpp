#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    double maxl=-1;
    cin>>n;
    vector<double>x(n);
    vector<double>y(n);
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n){
        for(int j=i;j<n;j++){
            maxl=max(maxl,sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2)));
        }
    }
    cout<<maxl<<endl;

    return 0;
}