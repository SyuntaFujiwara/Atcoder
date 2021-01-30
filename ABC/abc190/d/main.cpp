#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            if (N/i != i) res.push_back(N/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    ll n;
    cin>>n;
    const auto &res = enum_divisors(n*2);   
    ll ans=0;
    for(int i=0;i<res.size();i++){
        long double x=(long double)n/res[i]-(long double)res[i]/2+(long double)1/2;
        if(ceil(x) == floor(x))ans++;
    }
    cout<<ans<<endl;

    return 0;
}

