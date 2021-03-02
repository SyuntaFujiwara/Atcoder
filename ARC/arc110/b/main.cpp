#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    ll n;
    cin>>n;
    string t;
    cin>>t;
    ll ans=0;
    if(t=="1")ans=2*pow(10,10);
    else if(t=="11")ans=pow(10,10);
    ll type=5;
    string s="110";
    if(t=="10")ans=pow(10,10);
    else if(t=="01")ans=pow(10,10)-1;
    else if(t=="0")ans=pow(10,10);
    else if(t.substr(0,2)=="11")type=0;
    else if(t.substr(0,2)=="10")type=1;
    else if(t.substr(0,2)=="01")type=2;
    ll cnt=0;
    bool flag=false;
    if(type<3){
        for(ll i=0;i<n;i++){
            if(t[i]!=s[(i+type)%3]){
                flag=true;
                break;
            }
            if(t[i]=='0')cnt++;
        }
        ans=pow(10,10)-cnt;
    }
    if(type<5&&t[t.size()-1]=='0')ans++;
    if(flag)ans=0;
    cout<<ans<<endl;

    return 0;
}
