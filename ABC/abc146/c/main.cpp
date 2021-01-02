#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll a,b,x;
bool isOK(ll index, ll key) {
    ll d=to_string(index).length();
    if (a*index+b*d <= key) return true;
    else return false;
}
ll binary_search(ll key) {
    ll left = 0;
    ll right = (int)1e9;

    while (right - left > 1) {
        ll mid = left + (right - left) / 2;

        if (isOK(mid, key)) left = mid;
        else right = mid;
    }


    return right;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    cin>>a>>b>>x;
    ll ans=binary_search(x);
    ll dx=to_string(ans).length();
    if(a*ans+b*dx>x)ans--;
    cout<<ans<<endl;

    return 0;
}