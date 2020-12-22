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
    deque<int> b;
    for(int i=0;i<n;i++){
        if(i%2==0){
            b.push_back(a[i]);
        }
        else{
            b.push_front(a[i]);
        }
    }
    if(n%2){
        rep(i,n){
            cout<<b[n-i-1];
            if(i==n-1){
                cout<<endl;
                return 0;
            }
            cout<<" ";
        }
    }
    else{
        rep(i,n){
            cout<<b[i];
            if(i==n-1){
                cout<<endl;
                return 0;
            }
            else cout<<" ";
        }
    }

    return 0;
}