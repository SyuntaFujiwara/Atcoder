#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<int>t(n);
    vector<int>x(n);
    vector<int>y(n);
    rep(i,n)cin>>t[i]>>x[i]>>y[i];
    int bx=0,by=0,bt=0;
    for(int i=0;i<n;i++){
        int m=abs(x[i]-bx)+abs(y[i]-by);
        if(t[i]-bt<m||m%2!=(t[i]-bt)%2){
            cout<<"No"<<endl;
            return 0;
        }
        bx=x[i];by=y[i],bt=t[i];
    }
    cout<<"Yes"<<endl;

    return 0;
}