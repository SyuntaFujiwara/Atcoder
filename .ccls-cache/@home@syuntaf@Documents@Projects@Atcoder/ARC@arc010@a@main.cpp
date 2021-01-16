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

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    vector<int>c(m);
    for (auto &&e : c) {
        cin >> e;
    }
    for(int i=0;i<m;i++){
        if (n <= a&&n>=0) {
            n += b;
        }
        n-=c[i];
        if (n < 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "complete" << endl;

    return 0;
}
