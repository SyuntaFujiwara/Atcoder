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

    ll a;
    cin>>a;
    ll ans=-1;
    if(a>10){
        for(int i=10;i<1000000;i++){
            string s=to_string(i);
            ll sum=0;
            for(int j=s.size()-1;j>=0;j--){
                sum+=pow(i,s.size()-j-1)*(s[j]-'0');
            }
            if(sum==a){
                ans=i;
                break;
            }
        }
    }    
    cout<<ans<<endl;

    return 0;
}

