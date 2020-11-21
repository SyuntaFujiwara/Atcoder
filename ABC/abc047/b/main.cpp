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

    int w,h,n;
    cin>>w>>h>>n;
    vector<int>x(n);
    vector<int>y(n);
    vector<int>a(n);
    rep(i,n)cin>>x[i]>>y[i]>>a[i];
    int wl=0,wr=w,hu=h,hd=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            chmax(wl,x[i]);
        }
        else if(a[i]==2){
            chmin(wr,x[i]);
        }
        else if(a[i]==3){
            chmax(hd,y[i]);
        }
        else{
            chmin(hu,y[i]);
        }
    }
    int X=max(0,wr-wl);
    int Y=max(0,hu-hd);
    cout<<X*Y<<endl;

    return 0;
}