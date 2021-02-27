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

    ll n;
    cin>>n;
    map<ll,int>ans;
    for(int i=2;i<sqrt(n)+1;i++){
        for(int j=2;;j++){
            if(pow(i,j)<=n)ans[pow(i,j)]++;
            else break;
        }
    }
    cout<<n-ans.size()<<endl;

    return 0;
}

