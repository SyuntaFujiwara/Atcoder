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

    ll n,C;
    cin>>n>>C;
    ll a,b;
    ll c;
    ll ans=0;
    ll bday=0;
    vector<pair<ll,ll>>x;
    rep(i,n){
        cin>>a>>b>>c;
        x.push_back(make_pair(a-1,c));
        x.push_back(make_pair(b,-c));
    }
    sort(x.begin(),x.end());
    ll sum=0;
    for(auto [day,value]:x){
        if(day!=bday){
            ans+=((day-bday)*min(sum,C));
            bday=day;
        }
        sum+=value;
    }
    cout<<ans<<endl;

    return 0;
}
