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

    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3=x2-(y2-y1);
    int y3=y2+(x2-x1);
    int x4=x3-(x2-x1);
    int y4=y3-(y2-y1);
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

    return 0;
}