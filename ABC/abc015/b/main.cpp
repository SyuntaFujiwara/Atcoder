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
    vector<double>a(n);
    rep(i,n)cin>>a[i];
    double avg=0;
    int x=n;
    rep(i,n){
        avg+=a[i];
        if(a[i]==0){
            x--;
        }
    }
    avg=avg/x;
    if(avg==(int)avg)cout<<(int)avg<<endl;
    else cout<<(int)avg+1<<endl;

    return 0;
}