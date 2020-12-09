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

    long double txa,tya,txb,tyb;
    int T,V;
    cin>>txa>>tya>>txb>>tyb>>T>>V;
    int n;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n){
        long double sum=sqrt(pow(x[i]-txa,2)+pow(y[i]-tya,2))+sqrt(pow(txb-x[i],2)+pow(tyb-y[i],2));
        if(sum<=T*V){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}