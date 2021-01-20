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

    int y,m,d;
    cin>>y>>m>>d;
    if (m == 1 || m == 2) {
      m += 12;
      y--;
    }
    int s,t,u,v;
    s=y/4;
    t=y/100;
    u=y/400;
    v=(306*(m+1))/10;
    int ans=365*y+s-t+u+v+d-429;
    cout<<735369-ans<<endl;

    return 0;
}


