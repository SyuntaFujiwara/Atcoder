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
    vector<char>r(n);
    rep(i,n)cin>>r[i];
    long double avg=0;
    rep(i,n){
        int x=4-r[i]+'A';
        if(x<0)x=0;
        avg+=x;
    }
    cout<<fixed<<setprecision(15)<<avg/n<<endl;

    return 0;
}

