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

    ll a,b,c;
    cin>>a>>b>>c;
    for(int i=0;;i++){
        if(a%2==1||b%2==1||c%2==1){
            cout<<i<<endl;
            return 0;
        }
        if(a==b&&b==c){
            cout<<-1<<endl;
            return 0;
        }
        int na=0,nb=0,nc=0;
        na+=(b/2+c/2);
        nb+=(a/2+c/2);
        nc+=(a/2+b/2);
        a=na;
        b=nb;
        c=nc;
    }

    return 0;
}