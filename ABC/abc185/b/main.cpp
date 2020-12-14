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

    int n,m,t;
    cin>>n>>m>>t;
    vector<int>a(m);
    vector<int>b(m);
    rep(i,m){
        cin>>a[i]>>b[i];
        a[i]*=2;
        b[i]*=2;
    }
    t*=2;
    int prev=0;
    int cnt=n;
    rep(i,m){
        cnt=cnt-(a[i]-prev)/2;
        if(cnt<=0){
            cout<<"No"<<endl;
            return 0;
        }
        cnt=min(n,cnt+((b[i]-a[i])/2));
        prev=b[i];
    }
    cnt=cnt-(t-prev)/2;
    if(cnt<=0){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;

    return 0;
}