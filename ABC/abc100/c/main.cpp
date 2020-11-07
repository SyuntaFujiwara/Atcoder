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
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    for(int i=0;;i++){
        bool flag=false;
        rep(j,n){
            if(a[j]%2==0){
                a[j]=a[j]/2;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}