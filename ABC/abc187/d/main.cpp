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
    vector<pair<ll,pair<ll,ll>>>p(n);
    rep(i,n){
        cin>>p[i].second.first>>p[i].second.second;
        p[i].first=p[i].second.first*2+p[i].second.second;
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    ll sumA=0;
    ll sumB=0;
    rep(i,n)sumA+=p[i].second.first;
    rep(i,n){
        sumA-=p[i].second.first;
        sumB+=(p[i].second.first+p[i].second.second);
        if(sumA<sumB){
            cout<<i+1<<endl;
            return 0;
        }
    }

    return 0;
}
