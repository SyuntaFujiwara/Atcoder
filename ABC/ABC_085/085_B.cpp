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
    set<int>d;
    int D;
    rep(i,n){
        cin>>D;
        d.insert(D);
    }
    cout<<d.size()<<endl;

    return 0;
}
