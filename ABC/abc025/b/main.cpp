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

    int n,a,b;
    cin>>n>>a>>b;
    vector<string>s(n);
    vector<int>d(n);
    rep(i,n)cin>>s[i]>>d[i];
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=="West"){
            if(d[i]<a)ans-=a;
            else if(d[i]>b)ans-=b;
            else ans-=d[i];
        }
        else{
            if(d[i]<a)ans+=a;
            else if(d[i]>b)ans+=b;
            else ans+=d[i];
        }
    }
    if(ans>0)cout<<"East "<<ans<<endl;
    else if(ans<0)cout<<"West "<<abs(ans)<<endl;
    else cout<<0<<endl;

    return 0;
}