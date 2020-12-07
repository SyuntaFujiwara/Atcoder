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
    ll y;
    cin>>y;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i*1000+j*5000+(n-i-j)*10000==y&&(n-i-j)>=0){
                cout<<n-i-j<<" "<<j<<" "<<i<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<" "<<-1<<" "<<-1<<endl;

    return 0;
}
