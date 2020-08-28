#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    p p[n];
    int w,h;
    rep(i,n){
        cin>>w>>h;
        w=-w;
        p[i]=make_pair(h,w);
    }
    sort(p,p+n);
    

    return 0;
}
