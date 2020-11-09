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
    if(n/3600<10)cout<<"0"<<n/3600<<":";
    else cout<<n/3600<<":";
    n=n%3600;
    if(n/60<10)cout<<"0"<<n/60<<":";
    else cout<<n/60<<":";
    n=n%60;
    if(n<10)cout<<"0"<<n<<endl;
    else cout<<n<<endl;

    return 0;
}