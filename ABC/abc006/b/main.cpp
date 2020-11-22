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
    vector<int>a(1e6+5);
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(int i=3;i<1e6+5;i++){
        a[i]=(a[i-1]+a[i-2]+a[i-3])%10007;
    }
    cout<<a[n-1]<<endl;

    return 0;
}