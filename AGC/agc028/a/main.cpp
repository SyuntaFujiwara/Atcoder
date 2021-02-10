#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll x,ll y){
    if(x<y) swap(x,y);
    ll r;
    while(y>0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
ll lcm(ll x,ll y){
    return ll(x/gcd(x,y))*y;
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    for(ll l=lcm(n,m);l<n*m+1;l+=lcm(n,m)){
        if(l%min(n,m)==0){
            vector<char>x(l,'0');
            bool flag=true;
            for(int i=0;i<n;i++){
                x[i*(l/n)]=s[i];
            }
            for(int i=0;i<m;i++){
                if(x[i*(l/m)]!='0'&&x[i*(l/m)]!=t[i])flag=false;
            }
            if(flag){
                cout<<l<<endl;
                return 0;
            }

        }
    }
    cout<<-1<<endl;

    return 0;
}

