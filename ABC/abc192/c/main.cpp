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

    ll n,k;
    cin>>n>>k;
    ll prev=n;
    for(int i=0;i<k;i++){
        string x=to_string(prev);
        sort(x.begin(),x.end());
        ll g1=0;
        ll g2=0;
        for(int j=0;j<x.size();j++){
            g1=g1+(pow(10,x.size()-j)*(x[x.size()-j-1]-'0'));
        }
        int cnt=0;
        for(int j=0;j<x.size();j++){
            if(x[j]=='0')cnt++;
        }
        x.erase(0,cnt);
        for(int j=0;j<x.size();j++){
            g2=g2+(pow(10,x.size()-j)*(x[j]-'0'));
        }
        g1/=10;
        g2/=10;
        prev=g1-g2;
    }
    cout<<prev<<endl;

    return 0;
}

