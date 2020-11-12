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

    int x,y,z;
    cin>>x>>y>>z;
    int ans=0;
    x-=z;
    while(1){
        if(x-(y+z)>=0){
            ans++;
            x-=(y+z);
        }
        else break;
    }
    cout<<ans<<endl;

    return 0;
}