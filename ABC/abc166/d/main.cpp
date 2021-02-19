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

    ll x;
    cin>>x;
    for(int i=-118;i<120;i++){
        for(int j=-118;j<120;j++){
            int n=pow(i,5)-pow(j,5);
            if(n==x){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }

    return 0;
}

