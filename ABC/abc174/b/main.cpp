#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,d;
    cin>>n>>d;
    double x[n],y[n];
    rep(i,n)cin>>x[i]>>y[i];
    int cnt=0;
    rep(i,n){
        if(sqrt(pow(x[i],2)+pow(y[i],2))<=d){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
