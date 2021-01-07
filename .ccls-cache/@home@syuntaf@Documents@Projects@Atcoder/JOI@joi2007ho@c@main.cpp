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
    vector<int>x(n);
    vector<int>y(n);
    rep(i,n)cin>>x[i]>>y[i];
    vector<vector<bool>>exist(5005,vector<bool>(5005));
    rep(i,n)exist[x[i]][y[i]]=true;
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int xl=x[j]-x[i];
            int yl=y[j]-y[i];
            if(x[j]-yl<0||y[j]+xl<0||x[i]-yl<0||y[i]+xl<0)continue;
            if(x[j]-yl>5003||y[j]+xl>5003||x[i]-yl>5003||y[i]+xl>5003)continue;
            if(exist[x[j]-yl][y[j]+xl]&&exist[x[i]-yl][y[i]+xl]){
                int area=pow(xl,2)+pow(yl,2);
                chmax(ans,area);
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
