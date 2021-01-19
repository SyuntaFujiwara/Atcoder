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

    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    if(a[n-1] == 0) cout << "Yes" << endl;
    else{
      if(n%3 != 0) cout << "No" << endl;
      else{
        int m = n/3;
        if(a[0] == 0){
          if(a[m-1] == 0 && a[m] == a[n-1]) cout << "Yes" << endl;
          else cout << "No" << endl;
        } else {
          int x = a[0];
          int y = a[m];
          int z = x ^ y;
          if (a[m - 1] == x && a[2 * m - 1] == y && a[2 * m] == z &&
              a[n - 1] == z)
            cout << "Yes" << endl;
          else
            cout << "No" << endl;
        }
      }
    }
    return 0;
}

