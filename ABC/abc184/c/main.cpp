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

    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2&&c1==c2)cout<<0<<endl;
    else if(r1+c1==r2+c2)cout<<1<<endl;
    else if(r1-c1==r2-c2)cout<<1<<endl;
    else if(abs(r1-r2)+abs(c1-c2)<=3)cout<<1<<endl;
    else if(r1+c1+5<=r2+c2&&r1+c1-5>=r2+c2)cout<<2<<endl;
    else if(r1-c1+5>=r2-c2&&r1-c1-5<=r2-c2)cout<<2<<endl;
    else if(abs(r2-((c2-r2)-(c1-r1)))+abs(c2-((c2-r2)-(c1-r1)+(c1-r1)))<=3)cout<<2<<endl;
    else if(((c2-r2)-(c1-r1))%2==0)cout<<2<<endl;
    else cout<<3<<endl;

    return 0;
}