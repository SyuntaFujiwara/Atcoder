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

    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int ans;
    if(a+b<2*c)ans=a*x+b*y;
    else{
        if(x<y){
            ans=min(2*c*x+b*(y-x),y*c*2);
        }
        else{
            ans=min(2*c*y+a*(x-y),x*c*2);
        }
    }
    cout<<ans<<endl;

    return 0;
}