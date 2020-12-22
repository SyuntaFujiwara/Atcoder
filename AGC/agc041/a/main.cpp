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

    ll n,a,b;
    cin>>n>>a>>b;
    if(a%2!=b%2){
        cout<<min(n-b,a-1)+1+(b-a-1)/2<<endl;
    }
    else{
        cout<<(b-a)/2<<endl;
    }

    return 0;
}